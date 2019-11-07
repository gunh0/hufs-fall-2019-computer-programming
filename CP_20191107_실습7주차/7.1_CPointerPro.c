#include <stdio.h>
#include <stdlib.h>

void allocateArray(int* arr, int size, int value)
{
	arr = (int*)malloc(size * sizeof(int));
	if (arr != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			*(arr + i) = value;
		}
	}
}

int main()
{
	int* vector = NULL;
	int size = 0;
	int value = 0;
	scanf_s("%d %d", &size, &value);
	allocateArray(&vector, size, value);
	for (int i = 0; i < size; i++)
		printf("%d ", vector[i]);
	return 0;
}





/*
���� ��µ��� �ʴ� ������ vector ������ �Լ��� ���޵� ��,
�Ű����� arr�� ����Ǿ� ���޵Ǳ� �����̸�, arr�� ���� ������ vector�� ���� ������ ��ġ�� �ʴ´�.
�Լ��� ��ȯ�Ǹ� arr ������ ����� ���� vector ������ ������� �ʴ´�.

malloc�� ȣ�� �� �� allocateArray �Լ����� ���� arr�� ���Ӱ� �Ҵ�� �� �޸� ������ ����Ű���� �����ȴ�.
�Լ��� ��ȯ�� ���Ŀ��� �Լ� ������ �Ҵ�� �޸��� �ּҸ� �Ҿ���� �޸� ������ �߻��Ѵ�.
*/