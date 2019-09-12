################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/arrayFunctions.c \
../src/clase\ 6b.c \
../src/profile.c \
../src/validations.c 

OBJS += \
./src/arrayFunctions.o \
./src/clase\ 6b.o \
./src/profile.o \
./src/validations.o 

C_DEPS += \
./src/arrayFunctions.d \
./src/clase\ 6b.d \
./src/profile.d \
./src/validations.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/clase\ 6b.o: ../src/clase\ 6b.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/clase 6b.d" -MT"src/clase\ 6b.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


