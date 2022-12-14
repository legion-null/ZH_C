#pragma once

#include "../../汉化/汉化.h"

#include <time.h>

#define 时钟速度		CLOCKS_PER_SEC

类型别名 clock_t 时钟;
类型别名 time_t 秒钟;

结构体 时间 {
	i32 秒;
	i32 分;
	i32 时;
	i32 日;
	i32 月;
	i32 年;
	i32 星期;
	i32 太阳日;
	i32 夏令时;
};

struct tm;

c8* 取时间(只读 结构体 时间 *时间指针);
时钟 取时钟时间(空);
c8* 取当地时间文本(只读 秒钟 *时间指针);
f64 取相差秒数(秒钟 时间1, 秒钟 时间2);
结构体 时间* 取格林尼治时间(只读 秒钟 *时间);
结构体 时间* 取当地时间(只读 秒钟 *时间);
秒钟 转为当地时间(结构体 时间 *时间);
usize 取格式化字符串时间(c8 *字符串, usize 最大字符数, 只读 c8 *格式, 只读 结构体 时间 *时间);
秒钟 取当前时间(秒钟 *秒数);
