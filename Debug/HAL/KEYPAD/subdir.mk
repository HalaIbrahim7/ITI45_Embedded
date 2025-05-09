################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/KEYPAD/KEYPAD.c \
../HAL/KEYPAD/KEYPAD_cfg.c 

OBJS += \
./HAL/KEYPAD/KEYPAD.o \
./HAL/KEYPAD/KEYPAD_cfg.o 

C_DEPS += \
./HAL/KEYPAD/KEYPAD.d \
./HAL/KEYPAD/KEYPAD_cfg.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/KEYPAD/%.o: ../HAL/KEYPAD/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\ITI Intake45\interfaces\avr\ITI45_Embedded\APP" -I"D:\ITI Intake45\interfaces\avr\ITI45_Embedded\HAL\LCD" -I"D:\ITI Intake45\interfaces\avr\ITI45_Embedded\MCAL" -I"D:\ITI Intake45\interfaces\avr\ITI45_Embedded\HAL" -I"D:\ITI Intake45\interfaces\avr\ITI45_Embedded\LIB" -I"D:\ITI Intake45\interfaces\avr\ITI45_Embedded\SERVICES" -I"D:\ITI Intake45\interfaces\avr\ITI45_Embedded\MCAL\DIO" -I"D:\ITI Intake45\interfaces\avr\ITI45_Embedded\MCAL\EXI" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


