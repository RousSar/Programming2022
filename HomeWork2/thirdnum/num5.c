#include <stdio.h>
#include <math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "rus");

	int a, b, c;
	int Flag = 0, pi = 3.14;

	scanf_s("%d %d %d", &a, &b, &c);



	if (a == b && b == c) {
		Flag = 1;
		printf("равносторонний ");
	}
	else if (a == b || a == c || b == c) {
		Flag = 1;
		printf("равнобедренный ");
	}
	if (a*a + b*b == c*c || a * a + c * c == b * b || c * c + b * b == a * a) {
		Flag = 1;
		printf("пр€моугольный ");
	}
	if (Flag == 0) {
		printf("произвольный ");
	}
	if (a + b < c || a + c < b || c + b < a) {
		printf("не €вл€етс€ треугольником");
	}

	return 0;
}