# STM32F4xx Low Layer Driver

This project contains only the Low-Layer APIs source code for STM32F4 microcontrollers.
For code base the author uses official the Low-Layer APIs code from package [STM32CubeF4][1].

## Why does this project exist?

The ST company actively promotes its product - hardware abstraction layer (HAL).
Author of this repository considers that the HAL is a bullshit. Only Low-Layer APIs
is true product for experts.

In official [package][1] the Low-Layer APIs was mixed with bullshit code of HAL.
In this repository the author singled out the quintessence of Low-Layer APIs source code.

## Additional enhancement

After singling out the Low-Layer APIs source code the author made some improvements that
don't change official code any way:

-   IAR project for building static library of Low-Layer APIs
-   new module for dynamically setting the interrupt handler (the vector table has been copied to the RAM sector)

## System clock

System clock from HSE is 8 MHz. Be careful, see macro definitions in options of the project.

## Low-Layer APIs for other series

Author made repositories for other series:

-   [STM32L0 series][2]
-   [STM32F1 series][3]

[1]:  //www.st.com/en/embedded-software/stm32cubef4.html   "STM32CubeF4"
[2]:  //github.com/vitkorob/stm32l0xx-ll-driver/
[3]:  //github.com/vitkorob/stm32f1xx-ll-driver`
