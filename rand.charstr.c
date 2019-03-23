#include <stdio.h>
#include <time.h>

void constr(char *s1, char *s2){
	while(*s1)s1++;
	while(*s1++=*s2++)
	;
}

int main (){
	srand(time(0));

	int count = 12, x;
	char *c;
	char racha[50] = "file.";
	while (count--){
	x = rand()%11;
	if(x==0)*c = 'a';
	else if(x==1)*c = 'b';
	else if(x==2)*c = 'c';
	else if(x==3)*c = 'd';
	else if(x==4)*c = 'e';
	else if(x==5)*c = 'f';
	else if(x==6)*c = 'g';
	else if(x==7)*c = 'h';
	else if(x==8)*c = 'i';
	else if(x==9)*c = 'j';
	else *c = 'z';
	constr(racha, c);
}
	printf("%s", racha);
}
