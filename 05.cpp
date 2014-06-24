#include <stdio.h>
#include <string.h>


int main()
{
	char buf[50][256], *str[50], *temp;					// OUR STRINGS
	int length[50];
	int i = 0;
	int tmp;
	printf("Enter a strings: \n");
	do {
		fgets(buf[i], 256, stdin);
		length[i] = strlen(buf[i]);
		str[i] = buf[i];
		i++;
	} while (length[i-1] > 1);

	int count = i - 1;

	for (i = 1; i < count; i++) {						// SORT ARRAYS
		if (length[i+1] < length[i]) {
			tmp = length[i];
			length[i] = length[i + 1];
			length[i + 1] = tmp;
			temp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = temp;
			i-=2;
		}
	}
	for (i = 0; i <= count; i++) {						// OUTPUT STRINGS
		printf("%s", str[i]);
	}
	return 0;
}