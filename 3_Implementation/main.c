#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
void delay(volatile uint32_t i);
void start();
void stop();
void rain();
void heavy_rain();
void initialize_ports();
int main(){
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
	GPIOA->MODER |= GPIO_MODER_MODE0_1;
	initialize_ports();
	while(1){
		if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)){
		start();
		rain();
		heavy_rain();}
		else
			stop();
	}
}
void initialize_ports(){
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	GPIOD->MODER |= GPIO_MODER_MODER12_0;
	GPIOD->MODER |= GPIO_MODER_MODER13_0;
	GPIOD->MODER |= GPIO_MODER_MODER14_0;
	GPIOD->MODER |= GPIO_MODER_MODER15_0;
}
void start(){
	GPIOD->BSRR = 1<<14;
}
void stop(){
	GPIOD->BSRR = 1<<(14+16);
}
void delay(volatile uint32_t delay){
	volatile uint32_t control;
	for(control = 0; control < delay; control++);
}
void rain(){
	GPIOD->BSRR = 1<<12;
	delay(20000000);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<13;
	delay(20000000);
	GPIOD->BSRR = 1<<(13+16);
	GPIOD->BSRR = 1<<15;
	delay(20000000);
	GPIOD->BSRR = 1<<(15+16);
}
void heavy_rain(){
	GPIOD->BSRR = 1<<12;
		delay(5000000);
		GPIOD->BSRR = 1<<(12+16);
		GPIOD->BSRR = 1<<13;
		delay(5000000);
		GPIOD->BSRR = 1<<(13+16);
		GPIOD->BSRR = 1<<15;
		delay(5000000);
		GPIOD->BSRR = 1<<(15+16);
}
