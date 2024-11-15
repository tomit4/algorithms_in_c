#include <stdio.h>

struct fraction {
	int numerator;
	int denominator;
};

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

	while (num1 > 0 && num2 > 0) {
		printf("Enter two non-zero numbers: ");
		scanf("%d %d", &num1, &num2);
		if (num1 == 0 || num2 == 0) {
			printf("Neither number can be zero\n");
			return 0;
		}
		printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
	}
	return 0;
}
