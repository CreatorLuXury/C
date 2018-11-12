/* by Creator LuXury */
#include <stdio.h>
#include <time.h>

int los()// funkcja losuje zgadywana liczbe
{
	int c, z;
    time_t tt;
    z = time(&tt);
    srand(z);
    c=rand()%20;
    return c;
}
int main()
{
	start:; // powrot do startu po zgadnieciu liczby
	printf("sprobuj zgadnac liczbe od 0 do 19\n");
	int a,i=1, zgadywana, ilosc = 2,l;
	printf("podaj liczbe\n");
	scanf("%d", &zgadywana);
	l=los();
	if(zgadywana==l)
	{
		printf("brawo zgadles za pierwszym razem !!\n\n");
		goto start;
	}
	else {
	printf("niestety to nie ta liczba podaj ponownie liczbe\n");
	if(zgadywana<l)printf(" *wskazowka* podana liczba jest wieksza od liczby wylosowanej\n");
	else printf(" *wskazowka* podana liczba jest mniejsza od liczby wylosowanej \n");
	loop:;
	scanf("%d", &zgadywana);
	if(zgadywana==l){
		printf ("dobrze zgadles za %d razem\n\n", ilosc);
		goto start;
		}
	else{
	 ("niestety zle podaj ponownie liczbe\n");
	if(zgadywana<l)printf(" *wskazowka* podana liczba jest wieksza od liczby wylosowanej\n");
	else printf(" *wskazowka* podana liczba jest mniejsza od liczby wylosowanej \n");
	ilosc+=1;
	goto loop;//powrot do poczatku petli jesli sie nie zgadlo
		}
	}
	
}
