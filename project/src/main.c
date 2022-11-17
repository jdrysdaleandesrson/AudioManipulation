#include <atmel_start.h>
#include "kiss_fft.h"
#include "utils.h"
#include "driver_init.h"
#include "driver_examples.h"

float mBuffer[1024];

int main(void){
	//Kiss mFft;
	//mFft.setData(mBuffer);
	//float * mData = mFft.getAmplitude();	
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	int adc_val;
	adc_sync_enable_channel(&ADC_0, CONF_ADC_0_CHANNEL_0);
	//kiss_fft_cfg cfg = kiss_fft_alloc(1024,0 ,0,0 );
	kiss_fft_cpx *cpx_in = malloc(FRAMES * sizeof(kiss_fft_cpx));
	kiss_fft_cpx *cpx_out = malloc(FRAMES * sizeof(kiss_fft_cpx));
	kiss_fft_cfg cfg = kiss_fft_alloc(1024, 0 ,0,0 );
	/* Replace with your application code */
	while(1){
		for(int i =0; i<=1024; i++){	
	    	//	adc_sync_read_channel(&ADC_0, 0,&adc_val,4);
			adc_sync_read_channel(&ADC_0, CONF_ADC_0_CHANNEL_0, &adc_val, 2);
	    		mBuffer[i] = adc_val;
			cpx_in[i] = (kiss_fft_cpx){.r = x, .i = x}; 
			//io_write("%d\n",adc_val);
		}
//		kiss_fft(cfg,cx_in,cx_out);
	}
	//fft
	//inverse fft
	//dac
	//printf(cx_out.real);
}
