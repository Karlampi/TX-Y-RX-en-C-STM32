#include <stm32f10x.h>
#include "times.h"

// Blink LED three times
void led_blink(void){
    for(int x = 0; x < 3; x++){
        GPIOC->ODR |= (1 << 13);
				delay_ms(100);
				GPIOC->ODR &= ~(1 << 13);
        delay_ms(100);
    }
}