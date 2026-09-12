################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/custom_src/clock.c 

OBJS += \
./drivers/custom_src/clock.o 

C_DEPS += \
./drivers/custom_src/clock.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/custom_src/%.o drivers/custom_src/%.su drivers/custom_src/%.cyclo: ../drivers/custom_src/%.c drivers/custom_src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -c -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-drivers-2f-custom_src

clean-drivers-2f-custom_src:
	-$(RM) ./drivers/custom_src/clock.cyclo ./drivers/custom_src/clock.d ./drivers/custom_src/clock.o ./drivers/custom_src/clock.su

.PHONY: clean-drivers-2f-custom_src

