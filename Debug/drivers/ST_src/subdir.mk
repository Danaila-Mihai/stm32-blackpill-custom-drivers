################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../drivers/ST_src/startup_stm32f401ccux.s 

C_SRCS += \
../drivers/ST_src/syscalls.c 

OBJS += \
./drivers/ST_src/startup_stm32f401ccux.o \
./drivers/ST_src/syscalls.o 

S_DEPS += \
./drivers/ST_src/startup_stm32f401ccux.d 

C_DEPS += \
./drivers/ST_src/syscalls.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/ST_src/%.o: ../drivers/ST_src/%.s drivers/ST_src/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"
drivers/ST_src/%.o drivers/ST_src/%.su drivers/ST_src/%.cyclo: ../drivers/ST_src/%.c drivers/ST_src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -c -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-drivers-2f-ST_src

clean-drivers-2f-ST_src:
	-$(RM) ./drivers/ST_src/startup_stm32f401ccux.d ./drivers/ST_src/startup_stm32f401ccux.o ./drivers/ST_src/syscalls.cyclo ./drivers/ST_src/syscalls.d ./drivers/ST_src/syscalls.o ./drivers/ST_src/syscalls.su

.PHONY: clean-drivers-2f-ST_src

