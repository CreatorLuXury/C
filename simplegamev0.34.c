/* By Creator_LuXury */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void exit(int status); // wyjscie pod 0

int randchar()//wyrzuca losowy znak + - / * liczba to char ASCII
{// nie moge zaimplementowac dzialania z wywolanym znakiem wiec robie to w randchar i ifem w main
	int c, zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);
    c=rand()%4;
	if(c==0)return '/'; // lub char 47
	else if(c==1)return '*'; // lub char 42
	else if(c==2)return '-'; // lub char 43
	else if(c==3)return '+'; // lub char 45
}
 /* FUNKCJE Z RETURN C NIE ROBIA PROBLEMU */
int randchar2()// liczba do znaku w ifie 
{
	int c,i, z;
    time_t tt;
    z = time(&tt);
    srand(z);
    c=rand()%4;
    return c;
}
int randnum1()// funkcja na liczbe losowa 1 (dziala)
{
	int c, z;
    time_t tt;
    z = time(&tt);
    srand(z);
    c=rand()%20;
    return c;
}
int randnum2()// funkcja na liczbe losowa 2 (dziala)
{
	int c, z;
    time_t tt;
    z = time(&tt);
    srand(z);
    c=rand()%19;
    return c;
}
int randnum3()// funkcja na liczbe losowa 3 (dziala)
{
	int c, z;
    time_t tt;
    z = time(&tt);
    srand(z);
    c=rand()%21;
    return c;
}
int randnum4()// funkcja na liczbe losowa 4 (dziala)
{
	int c, z;
    time_t tt;
    z = time(&tt);
    srand(z);
    c=rand()%22;
    return c;
}

int main()
{
	printf("\t\t\t\tnacisnij 0 aby wyjsc\n");
	start:;// program po zakonczeniu wraca tu
	int a, c, d, g, e, k, l, h;
	char b;
/*	printf(" %c \n", randchar());
	printf(" %d \n", randchar2());*/
	a = randnum1();
	b = randchar();
	c = randnum2();
	d = randchar2();
	k = randnum3();
	l = randnum4();
	printf (" wskaz ktore dzialanie jest wieksze  1 to >  2 to <  3 = \n");
	printf ("%d %c %d \t?\t", a,b,c); // b = to znak
	printf ("%d %c %d \n", k,b,l); //ponizej drugi sposob ktory dziala
	if (d==1) g = a*c;
	else if (d==0) g = a/c;
	else if (d==2) g = a-c;
	else if (d==3) g = a+c;
	if (d==1) e = k*l;
	else if (d==0) e = k/l;
	else if (d==2) e = k-l;
	else if (d==3) e = k+l;
	scanf("%d", &h);
	if(h==1)
	{
		if(g>e)printf("dobrze !");
		else printf("zle :c");
	}
	else if(h==2)
	{
		if(g<e)printf("dobrze !");
		else printf("zle :c");
	}
	else if(h==3)
	{
		if(g==e)printf("dobrze !");
		else printf("zle :c");
	}
	else if(h==0)exit(1);
	else printf("podales zla cyfre -.- ");
	printf("\nwynik obu wyrazen  %d ? %d \n", g, e);  // pokazuje obliczony wynik z obu wartosci
	goto start; // koniec i powrot do poczatku
	getchar();
}

