#include <stdio.h>

void troj(int a){
	int i=1;
	for(i;i<=a;i++){
		printf("X");
	}
}
void fun(int b, int a){
	int i=1;
	for(i;i<=b;i++){
		a--;
		troj(a);
		printf("\n");
	}
}
int main()
{
	int i=1,a,b,j=1;
	scanf("%d",&a);
	scanf("%d",&b);
fun(a,b);
fun(a+4,b+4);
fun(a+1,b+1);
fun(a-3,b-3);
fun(a+6,b+6);
return 0;
}
