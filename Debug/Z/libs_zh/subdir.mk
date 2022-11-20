################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Z/libs_zh/标准输入输出.c 

C_DEPS += \
./Z/libs_zh/标准输入输出.d 

OBJS += \
./Z/libs_zh/标准输入输出.o 


# Each subdirectory must supply rules for building sources it contributes
Z/libs_zh/%.o: ../Z/libs_zh/%.c Z/libs_zh/subdir.mk
	@echo '正在构建文件： $<'
	@echo '正在调用： Cross GCC Compiler'
	gcc -I../ZH_C -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo '已结束构建： $<'
	@echo ' '


clean: clean-Z-2f-libs_zh

clean-Z-2f-libs_zh:
	-$(RM) ./Z/libs_zh/标准输入输出.d ./Z/libs_zh/标准输入输出.o

.PHONY: clean-Z-2f-libs_zh

