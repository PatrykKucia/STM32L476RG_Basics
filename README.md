# STM32L476RG_Basics
Repository dedicated to the STM32L476RG microcontainer

#  Table of contents and projects
1. First project
2. GPIO


#  First projects
  - Quick conclusions
    - Device Spec: 
      - Cortex-A – microprocessors, intended mainly for operating systems, e.g. Linux, Android, Windows CE, iOS. They require external systems to work.
      - Cortex-R – circuits intended for real-time systems.
      - Cortex-M – microcontrollers, i.e. systems that have integrated memory and peripheral systems.
      - 3 × SPI, 1 × QSPI, 3 × I2C, 1 × CAN, 5 × USART, 1 × ULP UART,
      - 16 timers,
      - 3 × 12-bits ADC (24 internal canals ADC),
      - 51 × GPIO,
      - 2 × analog comparators,
      - 2 × operational amplifiers,
      - 1 × NTC,
      - DMA (direct memory access),
      - TRNG (true random number generator),
      - FPU (floating-point unit),
      - 1Mb Flash
      - 128 Kb RAM (96 Kb RAM & 32 Kb RAM2.)
    - Code only between `/* USER CODE BEGIN 1 */` & `/* USER CODE END 1 */` -CubeMX overwrites other code when changing configurartion
  #  GPIO
  - Functions
    - `void HAL_GPIO_TogglePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)` -switching pin state to oposite
    - `void HAL_Delay(uint32_t Delay)`
    - `GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)`  -name of values passing to this function is
                    NAMEFROMCYBEMX_GPIO_Port, NAMEFROMCYBEMX_Pin
    - `void HAL_GPIO_WritePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState)`
  - Quick conclusions
    - pins for same port (for example PB5-PB14) differ from each other by only one bit so we can use (ONLY IN THIS SPECIFIC CASE) bit switch operation << >>
    -

> [!TIP]
> Helpful advice for doing things better or more easily.
