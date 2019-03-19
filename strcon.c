#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void constr(char *s1, char *s2)
{
	int str1 = strlen(s1)-1;
	int str2 = strlen(s2);

	int i;
	for (i = 0; i < str2; i++)
	{		
		s1[++str1] = s2[i];
	}
}

int main() {
	
	char c[60] = "C:\\Users";
	char z[] = "Admin\\Desktop\\text.txt";
	constr(c, z);
	puts(c);
	printf("\n%s", c);
}
