#include <atmel_start.h>
#include "driver_examples.h"
#include "driver_init.h"
#include "utils.h"


int main(void)
{
	float buffer[4096];
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	int adc_val;
	int i =0;
        adc_sync_enable_channel(&ADC_0, CONF_ADC_0_CHANNEL_0);
  
        while (1) {
            adc_sync_read_channel(&ADC_0, CONF_ADC_0_CHANNEL_0,&adc_val, 2);
	    buffer[i] =(float)adc_val;
	    i++;
	}
	adc_sync_read_channel(&ADC_0, 0,&adc_val,4);
	/* Replace with your application code */
	while (1) {
	}
	//4096 global type_un16t
}
