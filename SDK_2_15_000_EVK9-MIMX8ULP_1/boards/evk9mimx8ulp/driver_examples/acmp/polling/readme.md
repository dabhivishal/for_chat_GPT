Overview
========
The ACMP Polling project is a simple demonstration program that uses the SDK software. It compares
the selected analog input with ACMP internal DAC output continuously and toggle the LED when the
final comparison result changed. The purpose of this demo is to show how to use the ACMP driver
in SDK software by polling way. The ACMP can be configured based on default configuration returned
by the API ACMP_GetDefaultConfig(). The default configuration is: high speed is not enabled, invert
output is not enabled, unfiltered output is not enabled, pin out is not enabled, offset level is
level 0, hysteresis level is level 0.


SDK version
===========
- Version: 2.15.000

Toolchain supported
===================
- IAR embedded Workbench  9.40.1
- GCC ARM Embedded  12.2

Hardware requirements
=====================
- Micro USB cable
- MIMX8ULP-EVK/EVK9 board
- J-Link Debug Probe
- 5V power supply
- Personal Computer

Board settings
==============
- This example project uses ACMP instance 1 to compare the voltage signal input from External Input2(J12-5)
with the voltage signal(half of 1.8V) output by ACMP's internal DAC. Terminal will print information
corresponding to different comparison result.
- Please note that the input voltage should in the range of 0 to 1.8V.
- Connect ACMP Input2(J12-5) to DC power supply.
- Please remove the R291 which connect to J12-5(or the PIN J12-5 is not able to input voltage) 

#### Please note this application can't support running with Linux BSP! ####

Prepare the Demo
================
1.  Connect 5V power supply and J-Link Debug Probe to the board, switch SW1 to power on the board.
2.  Connect a micro USB cable between the host PC and the J6 USB port on the target board.
3.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
4.  Download the program to the target board.
5.  Either press the reset button on your board or launch the debugger in your IDE to begin running the example.

Running the demo
================
If the input voltage input is in the range of 0.9V to 1.8V, that means the analog input is higher than DAC output.
If the input voltage input is in the range of 0V to 0.8V, that means the analog input is lower than DAC output.

When the demo runs successfully, following information can be seen on the terminal:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
The example compares analog input to the reference DAC output(CMP positive port).

The terminal will print CMP's output value when press any key.

Please press any key to get CMP's output value.

The analog input is LOWER than DAC output

The analog input is HIGHER than DAC output
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
