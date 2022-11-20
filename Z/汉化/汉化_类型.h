#pragma once

// ------------------------- 简洁类型 ------------------------- //

// 整数
#define d8		char
#define d16		short
#define d32		int
#define d64		long int

// 有符号整数类型
typedef signed d8 i8;
typedef signed d16 i16;
typedef signed d32 i32;
typedef signed d64 i64;

// 无符号整数类型
typedef unsigned d8 u8;
typedef unsigned d16 u16;
typedef unsigned d32 u32;
typedef unsigned d64 u64;

// CPU架构相关类型
typedef i64 isize;
typedef u64 usize;

// 浮点数类型
typedef float f32;
typedef double f64;
typedef long double f128;

// 字符类型
typedef char c8;

typedef i32 c32;

// ------------------------- 中文类型 ------------------------- //

#define 有符号	signed
#define 无符号	unsigned

#define 单字节	d8
#define 双字节	d16
#define 四字节	d32
#define 八字节	d64

typedef 单字节 字节;
typedef 双字节 短整数;
typedef 四字节 整数;
typedef 八字节 长整数;

typedef 有符号 单字节 有符号字节;
typedef 有符号 双字节 有符号短整数;
typedef 有符号 四字节 有符号整数;
typedef 有符号 八字节 有符号长整数;

typedef 无符号 单字节 无符号字节;
typedef 无符号 双字节 无符号短整数;
typedef 无符号 四字节 无符号整数;
typedef 无符号 八字节 无符号长整数;

typedef 有符号长整数 有符号硬件整数;
typedef 无符号长整数 无符号硬件整数;

typedef f32 短浮点数;
typedef f64 浮点数;
typedef f128 长浮点数;

typedef c8 字符;
typedef c8 宽字符;

typedef void 空;
