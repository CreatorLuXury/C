#include <stdio.h>

int main()
{
	int a,S=1;
	printf("podaj liczbe silni\n");
	scanf("%d",&a);
	while(a>0)
	{
		S=S*a;
		a--;
	}
	printf("silnia = %d\n", S);
	return 0;
}
