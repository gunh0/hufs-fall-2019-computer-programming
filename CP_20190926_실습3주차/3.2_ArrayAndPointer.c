// �����迭�� �������� ����

#include <stdio.h>

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	printf(" size of a = %d, size of int = %d \n\n", sizeof(a), sizeof(int));

	int n = sizeof(a) / sizeof(int);
	int i;
	int* p = a;

	printf(" a = %d, p = %d  \n\n", a, p);
	// �迭�� �ᱹ �����ͷ� �����ȴٴ� ���� �� �� �ִ�.

	for (i = 0; i < n; i++)
	{
		//printf(" a[%d]  ==> %d �ּ� ==> %d \n", i, a[i], &a[i]);
		//printf(" p[%d]  ==> %d �ּ� ==> %d \n", i, p[i], &p[i]);
		//printf(" *(a+%d)  ==> %d �ּ� ==> %d \n", i, *(a+i), a+i);
		printf(" *(p+%d)  ==> %d �ּ� ==> %X \n", i, *(p + i), p + i);
	}

	//�� ����
	a[0] = 255;
	a[1] = 256;
	a[2] = 257;
	a[3] = 258;
	a[4] = 259;

	return 0;
}