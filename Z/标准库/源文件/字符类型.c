#include "../头文件/字符类型.h"

#include <ctype.h>

i32 是字母或数字(i32 字符) {
	返回 isalnum(字符);
}

i32 是字母(i32 字符) {
	返回 isalpha(字符);
}

i32 是控制字符(i32 字符) {
	返回 iscntrl(字符);
}

i32 是十进制数字(i32 字符) {
	返回 isdigit(字符);
}

i32 是非空格可打印字符(i32 字符) {
	返回 isgraph(字符);
}

i32 是小写字母(i32 字符) {
	返回 islower(字符);
}

i32 是可打印字符(i32 字符) {
	返回 isprint(字符);
}

i32 是标点符号(i32 字符) {
	返回 ispunct(字符);
}

i32 是空白字符(i32 字符){
	返回 isspace(字符);
}

i32 是大写字母(i32 字符){
	返回 isupper(字符);
}

i32 是十六进制数字(i32 字符){
	返回 isxdigit(字符);
}

i32 大写转小写(i32 字符){
	返回 tolower(字符);
}

i32 小写转大写(i32 字符){
	返回 toupper(字符);
}

