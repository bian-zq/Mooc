//��Ŀ���ݣ�
//
//����һ���������ĺ�DAYS_FEB(year)���Լ���������year�Ķ��¹��м��졣
//
//
//
//�����ʽ:
//
//����һ����Ч�����
//
//
//
//�����ʽ��
//
//�������¸�ʽ�ַ��������"days of the FEB.: %d\n"
//
//
//
//����������
//
//2016
//
//
//
//���������
//
//days of the FEB.: 29
//
//ʱ�����ƣ�500ms�ڴ����ƣ�32000kb




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