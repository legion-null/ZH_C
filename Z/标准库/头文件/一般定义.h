#pragma once

#include "../../汉化/汉化.h"

#include <stddef.h>

#define 空值		0L

类型别名 i64 指针地址差值;
类型别名 u64 大小;
类型别名 i32 c32;

#define 结构体成员偏移量(类型名称,成员名称)		offsetof(类型名称,成员名称)
