#include <atmel_start.h>
#include "kiss_fft.h"
#include "utils.h"
#include "driver_init.h"
#include "driver_examples.h"
#include "kiss_fftr.h"
#include "_kiss_fft_guts.h"

float mBuffer[1024];
kiss_fft_cpx cpx_in[1024]; 
kiss_fft_cpx cpx_out[1024];
kiss_fft_scalar rin[1024];
//kiss_fft_scalar rout[1024];

int main(void){
	//Kiss mFft;
	//mFft.setData(mBuffer);
	//float * mData = mFft.getAmplitude();	
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	int adc_val;
	adc_sync_enable_channel(&ADC_0, CONF_ADC_0_CHANNEL_0);
	kiss_fftr_cfg cfg = kiss_fftr_alloc(1024, 0 ,0,0 );
	kiss_fftr_cfg cfgi = kiss_fftr_alloc(1024,1,0,0);
	/* Replace with your application code */
	dac_sync_enable_channel(&DAC_0, 0);
	printf("hello");
	while(1){
		for(int i =0; i<=1024; i++){	
	    	//	adc_sync_read_channel(&ADC_0, 0,&adc_val,4);
			adc_sync_read_channel(&ADC_0, CONF_ADC_0_CHANNEL_0, &adc_val, 2);
	    		rin[i] = adc_val;
		//	cpx_in[i] = (kiss_fft_cpx){.r = mBuffer[i], .i = mBuffer[i]}; 
			//io_write("%d\n",adc_val);
		}
		kiss_fftr(cfg,rin,cpx_out);
		kiss_fftri(cfg, cpx_out ,rin);
	}

	for (int i =0; i<=1024;i++){
		int rinI =(int)rin[i];
		dac_sync_write(&DAC_0, 0, &rinI, 1);
	}
	
	//fft
	//inverse fft
	//dac
	//printf(cx_out.real);
}

//hi zack
