#include <stdint.h>
int main(void) {

 GPIO_Init_With_Miself_Macros();
 while(1){
    if((*(uint32_t*)(0x40020800UL + 0x10UL) & 0x2000UL) != 0){
        *(uint32_t*)(0x40020400UL + 0x18UL) |= 0x80UL; //Установка единицы в 7-ой бит регистра ODR
    }
    else{
        *(uint32_t*)(0x40020400UL + 0x18UL) |= 0x800000UL; //Установка нуля в 7-ой бит регистра ODR
        }
    }
}