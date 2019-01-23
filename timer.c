#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t czas;
    time( & czas );
	printf("dzis jest %s \n", ctime( &czas));
	return 0;
	getchar();
}
