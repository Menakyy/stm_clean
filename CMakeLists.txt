cmake_minimum_required(VERSION 3.22)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project("STM_PROJECT")

option(TESTING "Building tests" OFF)

set(INCLUDE_DIRS
    "Core/Inc"
    "Drivers/CMSIS/Device/ST/STM32F3xx/Include"
    "Drivers/CMSIS/Include"
    "Drivers/STM32F3xx_HAL_Driver/Inc"
    "Drivers/STM32F3xx_HAL_Driver/Inc/Legacy"
)

set(C_SRCS
    "Core/Src/main.c"
    "Core/Src/stm32f3xx_hal_msp.c"
    "Core/Src/stm32f3xx_it.c"
    "Core/Src/syscalls.c"
    "Core/Src/sysmem.c"
    "Core/Src/sysmem.c"
    "Core/Src/system_stm32f3xx.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_cortex.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_dma.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_exti.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_flash_ex.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_flash.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_gpio.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_i2c_ex.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_i2c.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_pwr_ex.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_pwr.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_rcc_ex.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_rcc.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim_ex.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_uart_ex.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_uart.c"
    "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal.c"
)

include_directories(${INCLUDE_DIRS})

# add_executable(${CMAKE_PROJECT_NAME} ${CPP_SRCS} ${C_SRCS})
if(TESTING)
    add_subdirectory("lib/cpputest")
    add_subdirectory("tests")
endif()