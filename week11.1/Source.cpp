#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void percent(float x, float y)
{
	if (x < y || x == y)
	{
		double calculate, z;
		z = x / y;
		calculate = z * 100;
		printf("Percent is %.2lf\n", calculate);
	}
	else
	{
		printf("Error\n");
	}
}

int main()
{
	int i[2];
	int* quantity, * allquantity, q, a;
	quantity = &q;
	allquantity = &a;
	char bsa[2][20] = { "Quantity","All quantity" };

	int j;
	for (j = 0; j < 2; j++)
	{
		printf("Input %s : ", bsa[j]);
		scanf_s("%d", &i[j]);
	}

	percent(i[0], i[1]);
}