#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	int input = 0, size=0;
	int* arr;
	int* cpyArr;

	cpyArr = (int*)malloc(sizeof(int) * size);
	// size�� 0�� cpyArr �Ҵ�

	while (1)
	{
		arr = (int*)malloc(sizeof(int) * (size+1));
		// cpyArr���� ���� �ޱ� ���� cpyArr���� 1ū ���� �Ҵ�
		for (int i = 0; i < size; i++)
		{
			arr[i] = cpyArr[i];
		}

		scanf("%d", &input);
		if (input == -1)
		{
			free(cpyArr);
			break;
		}
		if (input < 0 || input>500)
			continue;
		else
		{
			size++;
			cpyArr = (int*)malloc(sizeof(int) * size);
			for (int j = 0; j < size; j++)
			{
				cpyArr[j] = arr[j];
			}
			cpyArr[size - 1] = input;
		}
	}
	scanf("%d", &n);
	printf("%d", arr[n-1]);
	free(arr);
}