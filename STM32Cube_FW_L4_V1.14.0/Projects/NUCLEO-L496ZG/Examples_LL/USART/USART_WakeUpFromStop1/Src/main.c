/**
  ******************************************************************************
  * @file    Examples_LL/USART/USART_WakeUpFromStop1/Src/main.c
  * @author  MCD Application Team
  * @brief   This example describes how to configure USART peripheral in Asynchronous mode
  *          for being able to wake from Stop mode 1 when a character is received on RX line using
  *          the STM32L4xx USART LL API.
  *          Peripheral initialization done using LL unitary services functions.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/** @addtogroup STM32L4xx_LL_Examples
  * @{
  */

/** @addtogroup USART_WakeUpFromStop1
  * @{
  */

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/
/**
  * @brief Variables used for charcater reception from PC Com port
  */
__IO uint8_t      ubFinalCharReceived = 0;
__IO uint32_t     ubReceivedChar;

/**
  * @brief Text string printed on PC Com port to inform MCU will enter in Stop Mode
  */
uint8_t aTextInfo[] = "\r\nUSART Example : MCU will now enter in Stop mode 1.\n\rEnter any character for waking up MCU.\r\n";

/* Private function prototypes -----------------------------------------------*/
void     SystemClock_Config(void);
void     LED_Init(void);
void     LED_On(void);
void     LED_Off(void);
void     LED_Blinking(uint32_t Period);
void     LED_Blinking_3s(void);
void     Configure_USART1(void);
void     Configure_PWR(void);
void     PrepareUSARTToStopMode(void);
void     EnterStop1Mode(void);
void     PrintInfo(void);

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  /* Configure the system clock to 16 MHz */
  SystemClock_Config();

  /* Initialize LED1 */
  LED_Init();

  /* Configure Power IP */
  Configure_PWR();

  /* Configure USART1 (USART IP configuration and related GPIO initialization) */
  Configure_USART1();

  /* Start main program loop :
     - make LED blink during 3 sec
     - Enter Stop mode 1 (LED turned Off)
     - Wait for any character received on USART RX line for waking up MCU
  */
  while (ubFinalCharReceived == 0)
  {
    /* LED blinks during 3 seconds */
    LED_Blinking_3s();

    /* Send Text Information on USART TX to PC Com port */
    PrintInfo();

    /* Prepare USART for entering Stop Mode */
    PrepareUSARTToStopMode();
    
    /* Enter Stop mode 1 */
    EnterStop1Mode();
    
    /* At this point, MCU just wakes up from Stop mode 1 */
  }
  
  /* Infinite loop */
  while (1)
  {
  }
}

/**
  * @brief  This function configures USART1.
  * @note   This function is used to :
  *         -1- Enable GPIO clock and configures the USART1 pins.
  *         -2- NVIC Configuration for USART1 interrupts.
  *         -3- Enable the USART1 peripheral clock and clock source.
  *         -4- Configure USART1 functional parameters.
  *         -5- Enable USART1.
  * @note   Peripheral configuration is minimal configuration from reset values.
  *         Thus, some useless LL unitary functions calls below are provided as
  *         commented examples - setting is default configuration from reset.
  * @param  None
  * @retval None
  */
void Configure_USART1(void)
{
  /* (1) Enable GPIO clock and configures the USART1 pins **********************/
  /*    (TX on PA.9, RX on PA.10)                     **********************/

  /* Enable the peripheral clock of GPIOA */
  LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOA);

  /* Configure TX Pin as : Alternate function, High Speed, PushPull, Pull up */
  LL_GPIO_SetPinMode(GPIOA, LL_GPIO_PIN_9, LL_GPIO_MODE_ALTERNATE);
  LL_GPIO_SetAFPin_8_15(GPIOA, LL_GPIO_PIN_9, LL_GPIO_AF_7);
  LL_GPIO_SetPinSpeed(GPIOA, LL_GPIO_PIN_9, LL_GPIO_SPEED_FREQ_HIGH);
  LL_GPIO_SetPinOutputType(GPIOA, LL_GPIO_PIN_9, LL_GPIO_OUTPUT_PUSHPULL);
  LL_GPIO_SetPinPull(GPIOA, LL_GPIO_PIN_9, LL_GPIO_PULL_NO);

  /* Configure RX Pin as : Alternate function, High Speed, PushPull, Pull up */
  LL_GPIO_SetPinMode(GPIOA, LL_GPIO_PIN_10, LL_GPIO_MODE_ALTERNATE);
  LL_GPIO_SetAFPin_8_15(GPIOA, LL_GPIO_PIN_10, LL_GPIO_AF_7);
  LL_GPIO_SetPinSpeed(GPIOA, LL_GPIO_PIN_10, LL_GPIO_SPEED_FREQ_HIGH);
  LL_GPIO_SetPinOutputType(GPIOA, LL_GPIO_PIN_10, LL_GPIO_OUTPUT_PUSHPULL);
  LL_GPIO_SetPinPull(GPIOA, LL_GPIO_PIN_10, LL_GPIO_PULL_NO);

  /* (2) NVIC Configuration for USART1 interrupts */
  /*  - Set priority for USART1_IRQn */
  /*  - Enable USART1_IRQn           */
  NVIC_SetPriority(USART1_IRQn, 0);  
  NVIC_EnableIRQ(USART1_IRQn);

  /* (3) Enable the USART1 peripheral clock and clock source ****************/
  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_USART1);

  /* Set USART1 clock source as HSI */
  LL_RCC_SetUSARTClockSource(LL_RCC_USART1_CLKSOURCE_HSI);

  /* (4) Configure USART1 functional parameters ********************************/
  
  /* Disable USART1 prior modifying configuration registers */
  /* Note: Commented as corresponding to Reset value */
  // LL_USART_Disable(USART1);
  
  /* TX/RX direction */
  LL_USART_SetTransferDirection(USART1, LL_USART_DIRECTION_TX_RX);

  /* 8 data bit, 1 start bit, 1 stop bit, no parity */
  LL_USART_ConfigCharacter(USART1, LL_USART_DATAWIDTH_8B, LL_USART_PARITY_NONE, LL_USART_STOPBITS_1);

  /* No Hardware Flow control */
  /* Reset value is LL_USART_HWCONTROL_NONE */
  // LL_USART_SetHWFlowCtrl(USART1, LL_USART_HWCONTROL_NONE);

  /* Oversampling by 16 */
  /* Reset value is LL_USART_OVERSAMPLING_16 */
  // LL_USART_SetOverSampling(USART1, LL_USART_OVERSAMPLING_16);

  /* Set Baudrate to 9600 using HSI frequency set to HSI_VALUE */
  LL_USART_SetBaudRate(USART1, HSI_VALUE, LL_USART_OVERSAMPLING_16, 9600); 

  /* Set the wake-up event type : specify wake-up on RXNE flag */
  LL_USART_SetWKUPType(USART1, LL_USART_WAKEUP_ON_RXNE);

  /* (5) Enable USART1 **********************************************************/
  LL_USART_Enable(USART1);
  
  /* Polling USART initialisation */
  while((!(LL_USART_IsActiveFlag_TEACK(USART1))) || (!(LL_USART_IsActiveFlag_REACK(USART1))))
  { 
  }
}

/**
  * @brief  Function to configure and initialize PWR Peripheral.
  * @param  None
  * @retval None
  */
void Configure_PWR(void)
{
  /* Enable Power Clock */
  LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_PWR);

  /* Ensure that HSI is wake-up system clock */ 
  LL_RCC_SetClkAfterWakeFromStop(LL_RCC_STOP_WAKEUPCLOCK_HSI);
}

/**
  * @brief  Function to configure USART for being ready to enter Stop mode 1.
  * @param  None
  * @retval None
  */
void PrepareUSARTToStopMode(void)
{

  /* Empty RX Fifo before entering Stop mode 1 (Otherwise, characters already present in FIFO
     will lead to immediate wake up */
  while (LL_USART_IsActiveFlag_RXNE(USART1))
  {
    /* Read Received character. RXNE flag is cleared by reading of RDR register */
    ubReceivedChar = LL_USART_ReceiveData8(USART1);
  }

  /* Clear OVERRUN flag */
  LL_USART_ClearFlag_ORE(USART1);

  /* Make sure that no USART transfer is on-going */ 
  while(LL_USART_IsActiveFlag_BUSY(USART1) == 1)
  {
  }
  /* Make sure that USART is ready to receive */   
  while(LL_USART_IsActiveFlag_REACK(USART1) == 0)
  {
  }

  /* About to enter stop mode: switch off LED */
  LED_Off();

  /* Configure USART1 transfer interrupts : */
  /* Clear WUF flag and enable the UART Wake Up from stop mode Interrupt */
  LL_USART_ClearFlag_WKUP(USART1);
  LL_USART_EnableIT_WKUP(USART1);

  /* Enable Wake Up From Stop */
  LL_USART_EnableInStopMode(USART1);
}

/**
  * @brief  Function to enter in Stop mode 1.
  * @param  None
  * @retval None
  */
void EnterStop1Mode(void)
{
  /** Request to enter STOP 1 mode
    * Following procedure describe in STM32L4xx Reference Manual
    * See PWR part, section Low-power modes, STOP 1 mode
    */
  /* Set STOP 1 mode when CPU enters deepsleep */
  LL_PWR_SetPowerMode(LL_PWR_MODE_STOP1);

  /* Set SLEEPDEEP bit of Cortex System Control Register */
  LL_LPM_EnableDeepSleep();

  /* Request Wait For Interrupt */
  __WFI();
}

/**
  * @brief  Send Txt information message on USART Tx line (to PC Com port).
  * @param  None
  * @retval None
  */
void PrintInfo(void)
{
  uint32_t index = 0;
  
  /* Send characters one per one, until last char to be sent */
  for (index = 0; index < sizeof(aTextInfo); index++)
  {
    /* Wait for TXE flag to be raised */
    while (!LL_USART_IsActiveFlag_TXE(USART1))
    {
    }

    /* Write character in Transmit Data register.
       TXE flag is cleared by writing data in TDR register */
    LL_USART_TransmitData8(USART1, aTextInfo[index]);
  }

  /* Wait for TC flag to be raised for last char */
  while (!LL_USART_IsActiveFlag_TC(USART1))
  {
  }
}

/**
  * @brief  Initialize LED1.
  * @param  None
  * @retval None
  */
void LED_Init(void)
{
  /* Enable the LED1 Clock */
  LED1_GPIO_CLK_ENABLE();

  /* Configure IO in output push-pull mode to drive external LED1 */
  LL_GPIO_SetPinMode(LED1_GPIO_PORT, LED1_PIN, LL_GPIO_MODE_OUTPUT);
  /* Reset value is LL_GPIO_OUTPUT_PUSHPULL */
  //LL_GPIO_SetPinOutputType(LED1_GPIO_PORT, LED1_PIN, LL_GPIO_OUTPUT_PUSHPULL);
  /* Reset value is LL_GPIO_SPEED_FREQ_LOW */
  //LL_GPIO_SetPinSpeed(LED1_GPIO_PORT, LED1_PIN, LL_GPIO_SPEED_FREQ_LOW);
  /* Reset value is LL_GPIO_PULL_NO */
  //LL_GPIO_SetPinPull(LED1_GPIO_PORT, LED1_PIN, LL_GPIO_PULL_NO);
}

/**
  * @brief  Turn-on LED1.
  * @param  None
  * @retval None
  */
void LED_On(void)
{
  /* Turn LED1 on */
  LL_GPIO_SetOutputPin(LED1_GPIO_PORT, LED1_PIN);
}

/**
  * @brief  Turn-off LED1.
  * @param  None
  * @retval None
  */
void LED_Off(void)
{
  /* Turn LED1 off */
  LL_GPIO_ResetOutputPin(LED1_GPIO_PORT, LED1_PIN);
}

/**
  * @brief  Set LED1 to Blinking mode for an infinite loop (toggle period based on value provided as input parameter).
  * @param  Period : Period of time (in ms) between each toggling of LED
  *   This parameter can be user defined values. Pre-defined values used in that example are :
  *     @arg LED_BLINK_FAST : Fast Blinking
  *     @arg LED_BLINK_SLOW : Slow Blinking
  *     @arg LED_BLINK_ERROR : Error specific Blinking
  * @retval None
  */
void LED_Blinking(uint32_t Period)
{
  /* Toggle IO in an infinite loop */
  while (1)
  {
    LL_GPIO_TogglePin(LED1_GPIO_PORT, LED1_PIN);  
    LL_mDelay(Period);
  }
}

/**
  * @brief  Set LED1 to Blinking mode during 3s.
  * @param  None
  * @retval None
  */
void LED_Blinking_3s(void)
{
  uint32_t index=0;

  /* Toggle IO in during 3s (15*200ms) */
  for(index = 0; index < 15; index++)
  {
    LL_GPIO_TogglePin(LED1_GPIO_PORT, LED1_PIN);  
    LL_mDelay(200);
  }
}


/**
  * @brief  System Clock Configuration
  *         The system Clock is configured as follows :
  *            System Clock source            = PLL (HSI)
  *            SYSCLK(Hz)                     = 16000000
  *            HCLK(Hz)                       = 16000000
  *            AHB Prescaler                  = 1
  *            APB1 Prescaler                 = 1
  *            APB2 Prescaler                 = 1
  *            HSI Frequency(Hz)              = 16000000
  *            Flash Latency(WS)              = 0
  * @param  None
  * @retval None
  */
void SystemClock_Config(void)
{
  /* HSI configuration and activation */
  LL_RCC_HSI_Enable();
  while(LL_RCC_HSI_IsReady() != 1) 
  {
  };
  
  /* Sysclk activation on the HSI */
  LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_HSI);
  while(LL_RCC_GetSysClkSource() != LL_RCC_SYS_CLKSOURCE_STATUS_HSI) 
  {
  };
  
  /* Set AHB & APB1 & APB2 prescaler*/
  LL_RCC_SetAHBPrescaler(LL_RCC_SYSCLK_DIV_1);
  LL_RCC_SetAPB1Prescaler(LL_RCC_APB1_DIV_1);
  LL_RCC_SetAPB2Prescaler(LL_RCC_APB2_DIV_1);

  /* Disable MSI */
  LL_RCC_MSI_Disable();
  while(LL_RCC_MSI_IsReady() != 0) 
  {
  };

  /* Set systick to 1ms in using frequency set to 16MHz */
  LL_Init1msTick(16000000);
  
  /* Update CMSIS variable (which can be updated also through SystemCoreClockUpdate function) */
  LL_SetSystemCoreClock(16000000);
}

/******************************************************************************/
/*   IRQ HANDLER TREATMENT Functions                                          */
/******************************************************************************/

/**
  * @brief  Function called from USART IRQ Handler when RXNE flag is set
  *         Function is in charge of reading character received on USART RX line.
  * @param  None
  * @retval None
  */
void USART_CharReception_Callback(void)
{
  /* Read Received character. RXNE flag is cleared by reading of RDR register */
  ubReceivedChar = LL_USART_ReceiveData8(USART1);

  /* Check if received value is corresponding to specific one : S or s */
  if ((ubReceivedChar == 'S') || (ubReceivedChar == 's'))
  {
    /* Turn LED1 On : Expected character has been received */
    LED_On();

    /* End of program : set boolean for main loop exit */
    ubFinalCharReceived = 1;
  }

  /* Echo received character on TX */
  LL_USART_TransmitData8(USART1, ubReceivedChar);
}

/**
  * @brief  Function called in case of error detected in USART IT Handler
  * @param  None
  * @retval None
  */
void Error_Callback(void)
{
  /* Disable USART1_IRQn */
  NVIC_DisableIRQ(USART1_IRQn);
  
  /* Unexpected event : Set LED1 to Blinking mode to indicate error occurs */
  LED_Blinking(LED_BLINK_ERROR);
}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
