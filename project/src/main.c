#include <atmel_start.h>
#include "kiss_fft.h"
#include "utils.h"
#include "driver_init.h"
#include "driver_examples.h"
#include "kiss_fftr.h"
#include "_kiss_fft_guts.h"
#include "adc_payload.h"
#include "utils_list.h"

//kiss_fft_cpx cpx_in[1024]; 
kiss_fft_cpx cpx_out[1024];
kiss_fft_scalar rin[1024];
//kiss_fft_scalar rout[1024];
int urmum =0;
struct list_descriptor q;
struct list_descriptor q2;
void SysTick_Handler(){
	struct adc_payload *new_val = malloc(8);
	int adc_val = 0;
	adc_sync_read_channel(&ADC_0, CONF_ADC_0_CHANNEL_0,(unsigned char*) &adc_val, 2);
	//rin[i] = adc_val;
	//i = i+1;
	struct adc_payload *newval = malloc(sizeof(struct adc_payload));
	list_insert_at_end(&q, newval);
	newval->val=adc_val;
	struct adc_payload* dq2 =list_remove_head(&q2);
	if(dq2 != NULL){
		dac_sync_write(&DAC_0, 0, &dq2->val, 1);
		free(dq2);
	}

}
int main(void){
	asm ("cpsid i");
	//Kiss mFft;
	//mFft.setData(mBuffer);
	//float * mData = mFft.getAmplitude();	
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	*(uint32_t*)0xE000E010 = 7;
	*(uint32_t*)0xE000E014 = 0xffffff;
	adc_sync_enable_channel(&ADC_0, CONF_ADC_0_CHANNEL_0);
	kiss_fftr_cfg cfg = kiss_fftr_alloc(1024, 0 ,0,0 );
	kiss_fftr_cfg cfgi = kiss_fftr_alloc(1024,1,0,0);
	dac_sync_enable_channel(&DAC_0, 0);
	/* Replace with your application code */
	int i =0;
	asm("cpsie i");
	while(1){
	//	for(int i =0; i<=1024; i++){	
	    	//	adc_sync_read_channel(&ADC_0, 0,&adc_val,4);
		//	adc_sync_read_channel(&ADC_0, CONF_ADC_0_CHANNEL_0, &adc_val, 2);
	    	//	rin[i] = adc_val;
		//	cpx_in[i] = (kiss_fft_cpx){.r = mBuffer[i], .i = mBuffer[i]}; 
			//io_write("%d\n",adc_val);
	//	}
		asm("cpsid i");
		struct adc_payload* dq =list_remove_head(&q);
		asm("cpsie i");

		if (dq == NULL){
			continue;
		}else{
			rin[i++] = dq->val;
			free(dq);
		}
		if(i >= 1024){
		kiss_fftr(cfg,rin,cpx_out);
		/*float scale =1;
		for(int i =0; i<=512; i++){
			cpx_out[i].r = cpx_out[i].r * scale;
			cpx_out[i].i = cpx_out[i].i * scale;
			scale = scale - 0.001;
			
		}
		for(int i =512; i<=1023; i++){
			cpx_out[i].r = cpx_out[i].r * scale;
			cpx_out[i].i = cpx_out[i].i * scale;
			scale = scale + 0.001;
		}*/
		for (int j =0; j <= 1024; j++){
			if (rin[j] <= 3394){
				rin[j] = 0;
			} 
		}
		kiss_fftri(cfg, cpx_out ,rin);
		i =0;
		}
	
	for(int f =0; f<= 1024; f++){
		struct adc_payload *new_val = malloc(8);
		newval->val=rin[f];	
		asm("cpsid i");
		list_insert_at_end(&q2, newval);
		asm("cpsie i");

	}
		
	

	}
	//fft
	//inverse fft
	//dac
	//printf(cx_out.real);
}

//hi zack
