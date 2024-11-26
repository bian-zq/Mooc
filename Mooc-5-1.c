////题目内容：
////
////编写两个函数，分别求圆锥体的体积和表面积。从main函数中输入圆锥体的高和半径，调用两个自定义函数分别求出对应的体积和表面积，并输出完整信息。
////
////提示 : 圆周率取3.14
////
////
////
////输入格式:
////
////scanf("%lf%lf", &r, &h);//要求输入两个实数，表示圆锥体的高和半径
////
////
////
////输出格式：
////
////输出圆锥体的半径、高、表面积和体积
////
////printf语句中的格式串请复制  "radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n"
////
////
////
////输入样例：
////
////6 8
////
////
////
////输出样例：
////
////radius = 6.000000, height = 8.000000, Area of surface = 301.440000, Volume = 301.440000
////
//////时间限制：500ms内存限制：32000kb
//
//
//
//
//
//#include<stdio.h>
//#define pi 3.14
//double s(double r, double h) {
//	double area;
//	area = 2 *  pi * r * r + 2 * pi * r * h;
//	return area;
//}
//double v(double r, double h) {
//	double volumn;
//	volumn = pi * r * r * h;
//	return volumn;
//}
//int main() {
//	double r, h, Area, Volumn;
//	scanf("%lf%lf", &r, &h);
//	Area =  s(r, h);
//	Volumn = v(r, h);
//	printf("radius = % lf, height = % lf, Area of surface = % lf, Volume = % lf\n", r, h, Area, Volumn);
//	return 0;
//}