#include <stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus"); // иначе криллица не выводится
	int age;
	scanf_s("%d", &age); // отсутствовал &
	if (age <= 13)
		printf("%d - детство", age); // не было ;
	else if (14 <= age < 25)
		printf("%d - молодость", age); // было %f, хотя передовали переменную типа int 
	else if (25 <= age && age < 60) // лишний ;
	    printf("%d - зрелость", age); // было %f, хотя передовали переменную типа int 
	else
		printf("%d - старость", age);
	return 0;
}