#include <stdio.h>
#include <time.h>

int mn(int a, int b){
	int c;
	c=a*b;
	return c;
}
int dl(int a, int b)
{
	int c;
	c=a/b;
	return c;
}
int ver(int a, int b){
	int c;
	a++;
	++b;
	b++;
	++a;
	c=a+b;
	return c;
}
int los(int time){
	int c;
	time_t t;
	c=srand(time &t)*4e-5;
	return c;
}

int main()
{
	int a,b,c;
	double O;
	printf("wpisz dwie liczby\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d * %d = %d\n",a,b, mn(a,b));
	printf("%d / %d = %d\n",a,b, dl(a,b));
	printf("%d\n", ver(a,b));
	printf("%d\n", los(b));
	O=los(b)*ver(a,b)*mn(a,b)*dl(a,b);
	printf("%e\n", O);
	printf("%d baitow\n", sizeof(los(b)));
	getchar();
}
