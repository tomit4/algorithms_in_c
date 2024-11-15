#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int gcd(int num1, int num2)
{
	int temp;
	while (num1 > 0) {
		if (num1 < num2) {
			temp = num1;
			num1 = num2;
			num2 = temp;
		}
		num1 = num1 % num2;
	}
	return num2;
}

int main(void)
{
	int num1 = 1, num2 = 1;

	while (true) {
		printf("Enter two non-zero numbers: ");
		scanf("%d %d", &num1, &num2);
		if (num1 == 0 || num2 == 0) {
			exit(EXIT_SUCCESS);
		}
		printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
	}
	exit(EXIT_SUCCESS);
}
