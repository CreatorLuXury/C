#include <stdio.h>

int main()
{
	int a,b,c;
	printf("podaj trzy liczby\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);	
	if(a>b && a>c)printf("wieksza liczba jest %d \n", a);
	else if (b>c)printf("wieksza liczba jest %d \n", b);
	else printf("wieksza liczba jest %d \n", c);
	getchar();
	return 0;
}
