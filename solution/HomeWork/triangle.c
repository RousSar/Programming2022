#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	float x1 = 2, x2 = 1, x3 = -6, y1 = -3, y2 = 1, y3 = 5, S, P;
	S = abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) * 0.5;
	P = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) + sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)) + sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	printf("S = %f \n", S);
	printf("P = %f \n", P);
}