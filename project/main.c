#include <atmel_start.h>
#include "kiss_fft.h"


int main(void){
	//Kiss mFft;
	float mBuffer[1024];
	//mFft.setData(mBuffer);
	//float * mData = mFft.getAmplitude();	
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	int adc_val;
	kiss_fft_cfg cfg = kiss_fft_alloc(nfft,is_inverse_fft ,0,0 );
	/* Replace with your application code */
	while(1){
		for(int i =0; i<=1024+ i++){	
	    		adc_sync_read_channel(&ADC_0, 0,&adc_val,4);
	    		mbuffer[i] = adc_val;
			printf("%d\n",adc_val);
		}
		kiss_fft(cfg,cx_in,cx_out);
	}
	//fft
	//inverse fft
	//dac
	//printf(cx_out.real);
}
