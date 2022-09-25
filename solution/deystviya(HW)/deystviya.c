#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a = 20, b = 12;
	float sum, raz, pro, chas, sak, sam, cod;
	sum = a + b;
	raz = a - b;
	pro = a * b;
	chas = (float)a / b;
	sak = (pow(a, 2) + pow(b, 2)) * 0.5;
	sam = (abs(a) + abs(b)) * 0.5;
	cod = a % b;
	printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f", sum, raz, pro, chas, sak, sam, cod);
}
