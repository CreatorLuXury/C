#include <stdio.h>

int main()
{
	int i;
	float suma;
	float a[] = {7.0,2.5,3.4,6.8,9.3,2.1};
	int n = sizeof a / sizeof a[0];
	printf("%d\n", n);
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0]));
	for(i=0;i<n;i++){
		suma = suma + a[i];
	}
	printf("\n%.2f", suma);
}
