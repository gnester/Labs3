#include <stdio.h>
#include <stdlib.h>

#define MAX_RANK 5

void nullNum(char *num) {
	for (int i = 0; i < MAX_RANK; i++) {
		num[i] = ' ';
	}
};

int main()
{
	char str[256], num[MAX_RANK];
	int i = 0, rank = 0, summ = 0;
	printf("Enter a string for sort:\n");
	fgets(str, 256, stdin);
	while (str[i]) {
		if (str[i] >= '0' && str[i] <= '9') {
			if (rank < MAX_RANK) {
				num[rank] = str[i];
				rank++;
			} else {
				summ += atoi(num);
				// null variables
				rank = 0;
				nullNum(num);
			}
		}
		else {
			summ += atoi(num);
			//null variables
			rank = 0;
			nullNum(num);
		}
		i++;
	};
	printf("SUMM OF ELEMENTS = %d\n", summ);
	return 0;
}