################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/EXI/subdir.mk
-include MCAL/DIO/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/KEYPAD/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
ITI45_Embedded.lss \

FLASH_IMAGE += \
ITI45_Embedded.hex \

EEPROM_IMAGE += \
ITI45_Embedded.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: ITI45_Embedded.elf secondary-outputs

# Tool invocations
ITI45_Embedded.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,ITI45_Embedded.map -mmcu=atmega32 -o "ITI45_Embedded.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ITI45_Embedded.lss: ITI45_Embedded.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S ITI45_Embedded.elf  >"ITI45_Embedded.lss"
	@echo 'Finished building: $@'
	@echo ' '

ITI45_Embedded.hex: ITI45_Embedded.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex ITI45_Embedded.elf  "ITI45_Embedded.hex"
	@echo 'Finished building: $@'
	@echo ' '

ITI45_Embedded.eep: ITI45_Embedded.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex ITI45_Embedded.elf  "ITI45_Embedded.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: ITI45_Embedded.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 ITI45_Embedded.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) ITI45_Embedded.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
