#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input = 0;
	scanf("%d", &input);
	printf("\'����\' : %d\n", input);
	printf("\'unsigned\' : %u\n", input);
	printf("\'8����\' : %o\n", input);
	printf("\'16����\' : %x\n", input);
	printf("0x%X\n", input);

	return 0;
}