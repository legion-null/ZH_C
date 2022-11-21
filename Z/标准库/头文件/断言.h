#pragma once

#include "../../汉化/汉化.h"

#include <assert.h>

#ifdef 不调试
#define 断言(表达式)
#else
#define 断言(表达式)		assert(表达式)
#endif
