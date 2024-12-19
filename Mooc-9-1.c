//题目内容：
//
//定义一个带参数的宏DAYS_FEB(year)，以计算给定年份year的二月共有几天。
//
//
//
//输入格式:
//
//输入一个有效的年份
//
//
//
//输出格式：
//
//请用以下格式字符串输出："days of the FEB.: %d\n"
//
//
//
//输入样例：
//
//2016
//
//
//
//输出样例：
//
//days of the FEB.: 29
//
//时间限制：500ms内存限制：32000kb




#include<stdio.h>
#define DAYS_FEB(year) year%4
int main() {
	int c, a = 29, b = 28;
	scanf("%d", &c);
	if(DAYS_FEB(c) ==0&& DAYS_FEB(c)%25!=0){
		printf("days of the FEB.: %d\n", a);
	}
	else {
		printf("days of the FEB.: %d\n", b);
	}
	return 0;

}