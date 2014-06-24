#include <stdio.h>


int main()
{
	int family = 0, maxAge = 0, minAge = 150, i = 0;
	char name[50][50];
	int age[50];
	char *old, *young;
	printf("How much people: ");
	scanf("%d", &family);
	while (i < family) {
		printf("Enter a name: ");
		scanf("%s", &name[i]);
		printf("His\\Her age: ");
		scanf("%d", &age[i]);
		if (age[i]>maxAge) {
			old = &name[i][0];
			maxAge = age[i];
		}
		else if (age[i] < minAge) {
			young = &name[i][0];
			minAge = age[i];
		};
		i++;
	};
	printf("%s is oldest member family, his\\her age %d years\n", old, maxAge);
	printf("%s is youngest member family, his\\her age %d years\n", young, minAge);
	return 0;
}