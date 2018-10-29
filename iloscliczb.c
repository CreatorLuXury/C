#include <stdio.h>

int main()
{
	int a,k;
	int i;
	int suma=0;
		printf("wpisz ilosc liczb\n");
		scanf("%d", &a);
		for(k=1; k<=a; k++){
				printf("%d \n", k);
				suma+=k;
		}
			printf("%d\n", suma);
return 0;
getchar();
}
