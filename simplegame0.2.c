#include<stdio.h>
#include<time.h>
#include<stdlib.h>

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

int randchar2()// liczba do znaku w ifie
{
	int c,i, zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);
    c=rand()%4;
    return c;
}
int randnum1(){// funkcja na liczbe losowa 1 (dziala)
	int c,i, zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);
    c=rand()%100;
    return c;
}
int randnum2(){// funkcja na liczbe losowa 2 (dziala)
	int c,i, zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);
    c=rand()%99;
    return c;
}
int main()
{
	int a, c, d, g, e, h;
	char b;
/*	printf(" %c \n", randchar());
	printf(" %d \n", randchar2());*/
	a = randnum1();
	b = randchar();
	c = randnum2();
	d = randchar2();
	printf (" wskaz ktore dzialanie jest wieksze  1 to <  2 to >  3 = \n");
	printf ("%d %c %d \t?\t", a,b,c);
	printf ("%d %c %d \n", c,b,a); //ponizej drugi sposob ktory dziala
	if (d==1) g = a*c;
	else if (d==0) g = a/c;
	else if (d==2) g = a-c;
	else if (d==3) g = a+c;
	if (d==1) e = c*a;
	else if (d==0) e = c/a;
	else if (d==2) e = c-a;
	else if (d==3) e = c+a;
	scanf("%d", &h);
	if(h==1){
		if(g<e)printf("dobrze !");
		else printf("zle :c");
	}
	else if(h==2){
		if(g>e)printf("dobrze !");
		else printf("zle :c");
	}
	else if(h==3){
		if(g==e)printf("dobrze !");
		else printf("zle :c");
	}
	printf("\n\t%d ? %d \n", g, e);
	getchar();
	
}

