#pragma once

#include "../../汉化/汉化.h"

#include <stdarg.h>

#define 可变参数表		va_list

#define 可变参数_开始(可变参数表,固定参数)			va_start(可变参数表,固定参数)
#define 可变参数_下个参数(可变参数表,固定参数)		va_arg(可变参数表,固定参数)
#define 可变参数_结束(可变参数表)					va_end(可变参数表)
