////题目内容：
////
////以每行8个的形式输出100 - 999内的质数。
////
////
////
////输入格式:
////
////无
////
////
////
////输出格式：
////
////每行输出8个质数（最后一行可以不到8个），每个质数的输出格式控制符为"%4d"，最后一行输完后，输出一个"\n"
////
////
////
////输入样例：
////
////无
////
////
////
////输出样例：
////
////101 103 107 109 113 127 131 137
////
////139 149 151 157 163 167 173 179
////
////……
////
////时间限制：1000ms内存限制：32000kb
//
//
//
//
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int x, y, count=0;
//	for (x = 100; x <=999; x++) {
//		for (y = 2; y <= x; y++) {
//			if (x % y == 0)
//				break;
//		}
//		if (x == y) {
//			printf("%4d ", x);
//		count++;
//		if (count % 8 == 0)
//		printf("\n");
//		}	
//	}	
//	return 0;
//}
