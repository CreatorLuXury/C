#include <stdio.h>

int strlen2(const char *str)
{
    int count = 0;
    while (*(++str) != '\0') ++count;//or str++ and strlen2(s1)-1;
    return count;
}

void constr(char *s1, char *s2)
{
	int str1 = strlen2(s1);
	int str2 = strlen2(s2)+1;

	int i;
	for (i = 0; i < str2; i++)
	{		
		s1[++str1] = s2[i];
	}
}

//OR 
void constr2(char *s1, char *s2){
	while(*s1)s1++;
	while(*s1++=*s2++)
	;
}

int main() {
	
	char c[60] = "C:\\Users";
	char z[] = "Admin\\Desktop\\text.txt";
	constr(c, z);
	constr2(c, z);
	puts(c);
	printf("\n%s", c);

}
