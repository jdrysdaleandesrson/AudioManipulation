#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	int adc_val;
	adc_sync_read_channel(&ADC_0, 0,&adc_val,4);
	/* Replace with your application code */
	while (1) {
	}
}
