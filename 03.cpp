#define N 5																// WORDS PER STRING


#include <stdio.h>


int main()
{
	char str[256];
	char *start[N], *end[N];
	int i = 0, isWord = 0, k = 0;
	printf("Enter a string for reverse output:\n");
	fgets(str, 256, stdin);
	while (str[i]) {
		if (str[i] == 32 && isWord) {									// END SYMBOL WORD
			end[k] = &str[i - 1];
			isWord = 0;
			k++;
		}
		else if (str[i] != 32 && !isWord) {								// START SYMBOL WORD
			isWord = 1;
			start[k] = &str[i];
		};
		i++;
	};
	end[k] = &str[i - 2];												// END SYMBOL STRING
	for (k; k >= 0; k--) {
		while (start[k] <= end[k]) {
			putchar(*start[k]++);
		};
		printf(" ");
	};
	printf("\n");
	return 0;
}