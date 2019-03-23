#include <stdio.h>
#include <time.h>
#include <string.h>

void append(char* s, char c)
{
        int len = strlen(s);
        s[len] = c;
        s[len+1] = '\0';
}

void chartab(char* str){
int x,a=10;
char c;
char tab[10]; 
*(tab) = 'x';
*(tab+1) = 'y';
*(tab+2) = 'c';
*(tab+3) = 'd';
*(tab+4) = 'p';
*(tab+5) = 'f';
*(tab+6) = 'g';
*(tab+7) = 'h';
*(tab+8) = 'z';
*(tab+9) = 'k';
while(a--){
x = rand()%10;
c = *(tab+x);
append(str,c);
}
printf("%s", str);
}

int main(){
	srand(time(0));
	char str[50] = "a";
	chartab(str);
}
