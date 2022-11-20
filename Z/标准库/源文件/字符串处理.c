#include "../头文件/字符串处理.h"

#include <string.h>

空* 内存搜索(const 空 *内存位置, i32 字节, usize 搜索字节数) {
	返回 memchr(内存位置, 字节, 搜索字节数);
}

i32 内存比较(const 空 *内存位置1, const 空 *内存位置2, usize 比较字节数) {
	返回 memcmp(内存位置1, 内存位置2, 比较字节数);
}

空* 内存复制(空 *目标位置, const 空 *原位置, usize 字节数) {
	返回 memcpy(目标位置, 原位置, 字节数);
}

空* 内存移动(空 *目标位置, const 空 *原位置, usize 字节数) {
	返回 memmove(目标位置, 原位置, 字节数);
}

空* 内存设置(空 *目标位置, i32 字节, usize 字节数) {
	返回 memset(目标位置, 字节, 字节数);
}

c8* 字符串拼接(c8 *目标字符串, const c8 *原字符串) {
	返回 strcat(目标字符串, 原字符串);
}

c8* 字符串定长拼接(c8 *目标字符串, const c8 *原字符串, usize 字节数) {
	返回 strncat(目标字符串, 原字符串, 字节数);
}

c8* 字符搜索(const c8 *字符串, i32 字符) {
	返回 strchr(字符串, 字符);
}

i32 字符串比较(const c8 *字符串1, const c8 *字符串2) {
	返回 strcmp(字符串1, 字符串2);
}

i32 字符串定长比较(const c8 *字符串1, const c8 *字符串2, usize 比较字节数) {
	返回 strncmp(字符串1, 字符串2, 比较字节数);
}

i32 区域字符串比较(const c8 *字符串1, const c8 *字符串2) {
	返回 strcoll(字符串1, 字符串2);
}

c8* 字符串复制(c8 *目标字符串, const c8 *原字符串) {
	返回 strcpy(目标字符串, 原字符串);
}

c8* 字符串定长复制(c8 *目标字符串, const c8 *原字符串, usize 复制字节数) {
	返回 strncpy(目标字符串, 原字符串, 复制字节数);
}

usize 字符串互补跨度(const c8 *字符串1, const c8 *字符串2) {
	返回 strcspn(字符串1, 字符串2);
}

c8* 字符串错误号(i32 错误号) {
	返回 strerror(错误号);
}

usize 字符串长度(const c8 *字符串) {
	返回 strlen(字符串);
}

c8* 字符串相交位置(const c8 *字符串1, const c8 *字符串2) {
	返回 strpbrk(字符串1, 字符串2);
}

c8* 字符尾搜索(const c8 *字符串, i32 字符) {
	返回 strrchr(字符串, 字符);
}

usize 字符串跨度(const c8 *字符串1, const c8 *字符串2) {
	返回 strspn(字符串1, 字符串2);
}

c8* 字符串搜索(const c8 *字符串1, const c8 *字符串2) {
	返回 strstr(字符串1, 字符串2);
}

c8* 字符串分解(c8 *字符串, const c8 *分隔符) {
	返回 strtok(字符串, 分隔符);
}

usize 字符串转换(c8 *目标字符串, const c8 *原字符串, usize 转换字节数) {
	返回 strxfrm(目标字符串, 原字符串, 转换字节数);
}
