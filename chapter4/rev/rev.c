#include <stdio.h>
char char1;
char char2;
char char3;
int main() {
	char1 = 'A';
	char2 = 'B';
	char3 = 'C';
	printf("%c%c%c reversed is %c%c%c\n",
			char1, char2, char3,
			char3, char2, char1);
	return(0);
}

