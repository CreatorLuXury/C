#include <stdio.h>

int strlen2(const char *str)
{
    int count = 0;
    while (*(++str) != '\0') ++count;
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

int main() {
	
	char c[60] = "C:\\Users";
	char z[] = "Admin\\Desktop\\text.txt";
	constr(c, z);
	puts(c);
	printf("\n%s", c);
}
