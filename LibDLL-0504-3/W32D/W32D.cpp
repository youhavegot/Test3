// W32D.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "W32D.h"


#define error -1

// ���ǵ���������һ��ʾ��
W32D_API int nW32D=0;

// ���ǵ���������һ��ʾ����
W32D_API int fnW32D(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� W32D.h
CW32D::CW32D()
{
    return;
}

W32D_API int factorial(int n) {
	int sum = 1;
	if (n >= 13) return error;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	return sum;
}

FAC::FAC() {
	return;
}

float FAC::convert(float deg) {
	return deg*PI / 180;
}
