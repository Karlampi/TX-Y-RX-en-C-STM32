//Karla Yammilet Martinez Pichal
//Galilea Yamile Sanchez Andrade
//José Emmanuel Castro Velázquez

#include	<stm32f10x.h>
#include "leds.h"
#include "inits.h"
#include "extin.h"
#include "usart.h"
#include "times.h"

uint8_t receivedbyte;


int main(void){
	//All inits
    init_RCC_APB2();
    init_RP();
    init_led_pin();
    init_extin();
		init_usart();	
	
	//Turn on led in PC13
		led_blink();
	
	//Request a string
		usart1_sendbyte('\n');
		usart1_sendstring("enter character:");  
		delay_ms(1000);
		
	
    while(1){
			
			receivedbyte = usart1_receivebyte();
			usart1_sendbyte(receivedbyte);
			
    }
}

