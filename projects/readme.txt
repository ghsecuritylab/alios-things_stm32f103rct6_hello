vfs.c
->
vfs_.c
----------
output dir:/bin
list dir:/bin
----------
Target->Use MicroLIB
-------------
startup.c:

AOS_BINS

    #ifndef AOS_BINS
    application_start(kinit.argc, kinit.argv);  /* jump to app/example entry */
    #endif
--------------
debug->Use Simulator

DARMSTM.DLL
-pSTM32F103RB

--------------
board.c:
printf

PUTCHAR_PROTOTYPE
{
  if (ch == '\n') {
    hal_uart_send(&uart_0, (void *)"\r", 1, 30000);
  }
  hal_uart_send(&uart_0, &ch, 1, 30000);
  return ch;
}

---------------
board.c:
USART2

void stm32_soc_peripheral_init(void);

uart_dev_t uart_0;
DMA_HandleTypeDef hdma_usart2_tx;
DMA_HandleTypeDef hdma_usart2_rx;
UART_MAPPING UART_MAPPING_TABLE[] =
{
  {PORT_UART_STD, USART2, {UART_OVERSAMPLING_16, 64}}
};

static void stduart_init(void)
{
  uart_0.port = PORT_UART_STD;
  uart_0.config.baud_rate = STDIO_UART_BUADRATE;
  uart_0.config.data_width = DATA_WIDTH_8BIT;
  uart_0.config.flow_control = FLOW_CONTROL_DISABLED;
  uart_0.config.mode = MODE_TX_RX;
  uart_0.config.parity = NO_PARITY;
  uart_0.config.stop_bits = STOP_BITS_1;
  hal_uart_init(&uart_0);
}

---------------------
aos_init.c

void aos_show_welcome(void)
{
    puts("             Welcome to AliOS Things           ");
#ifdef CONFIG_AOS_INIT_WELCOME

----------------------
board.h:

baud==115200


#ifdef BOOTLOADER
#define STDIO_UART_BUADRATE 115200
#else
#define STDIO_UART_BUADRATE 115200
#endif


