#include<stdio.h>

int gcd(int x, int y) {
	if (y == 0) return x;
	else return gcd(y, x % y);
}

int main() {
	int a, b;
	puts("Enter two integers:");
	scanf_s("%d %d", &a, &b);
	printf("Greatest common diviser is:%d\n", gcd(a, b));
	return 0;
}