#include <stdio.h>
#include <malloc.h>

int main() {
	int size = 0;
	char* str;
	str = (char*)malloc(sizeof(char) * 100);

	gets(str);
	puts(str);
	
	while (str[size] != '\0') {
		size++;
	}

	printf("String %s have len %d \n", str, size);

	str[5] = '\0';
	puts(str);

	free(str);
	return 0;
}

