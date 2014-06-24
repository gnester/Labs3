#include <stdio.h>
#include <string.h>


int main()
{
	int i = 0, k;
	char str[256];
	printf("Enter a string: ");
	fgets(str, 256, stdin);
	k = strlen(str) - 2;
	while (i<k) {
		if (str[i] != str[k]) {
			printf("This string isn't a palindrome\n");
			return 0;
		}
		else {
			i++;
			k--;
		}
	};
	printf("This string is a palindrome\n");
	return 0;
}