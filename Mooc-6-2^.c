//题目内容：
//
//编写程序：编写函数fun，求出a到b之内能被7或者11整除，但不能同时被7和11整除的所有正数，并将他们放在数组中，函数返回这些数的个数。编写main函数，定义一个整型数组, 可容纳1000个元素, 定义整型变量a, b, 输入a，b的值(输入时a小于等于b)并调用函数fun进行求解, 最后在main函数中输出所有符合条件的元素。
//
//提示 : fun的函数原型为: int fun(int a, int b, int r[]);  其中的r用于存放a, b之间满足条件的所有元素
//
//输入格式 :
//
//输入表示范围的两个整数a和b（a < b）
//
//	scanf的格式控制串为 "%d%d"
//
//
//
//	输出格式：
//
//	输出满足条件的所有元素
//
//	输出每个元素时用格式串"%d", 不同元素间以一个空格分隔, 但是最后一个元素之后没有空格, 输出后直接换行
//
//
//
//	输入样例：
//
//	1 20
//
//
//
//	输出样例：
//
//	7 11 14
//
//	时间限制：500ms内存限制：32000kb