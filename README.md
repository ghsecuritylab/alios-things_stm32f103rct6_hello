# alios-things_stm32f103rct6_hello
[WIP] The Alios Things hello MDK4 (Keil 4) project porting to zhongjingyuan stm32f103rct6 develop board

## MDK4 (Keil4) Project  
* see projects/helloworld.uvproj  
* see projects/readme.txt  

## Issues  
* USART2 (PA2 TX, PA3 RX) is OK, but USART1 is not OK (see vendor/stm32f103rct6.pdf)    
* In MDK4 emulator (Debug Session), please open UART2, not UART1  
