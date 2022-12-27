#include <stdio.h>
#include<math.h>

int main() {
	int x, y, z;

	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);

	if (x != y && x != z && y != z) {

		if (x > y && x > z) {
			z += x;
		}
		else if (y > x && y > z) {
			z += y;
		}
		else {
			z = z * z;
		}
		printf("%d", z);

	}
	else {
		if (x == y && y == z) {
			printf("All variables are same"); 
		}
		else {
			if (x == y) {
				printf("x = y");
			}
			else if (x == z) {
				printf("x = z");
			}
			else if (y == z) {
				printf("y = z");
			}
		}
	}




	return 0;
}