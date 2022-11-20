################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/开始.c 

C_DEPS += \
./src/开始.d 

OBJS += \
./src/开始.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo '正在构建文件： $<'
	@echo '正在调用： Cross GCC Compiler'
	gcc -std=c11 -I../Z -I../Z/标准库/头文件 -O0 -g3 -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo '已结束构建： $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/开始.d ./src/开始.o

.PHONY: clean-src

