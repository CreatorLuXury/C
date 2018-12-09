#include <stdio.h>
#include <stdlib.h>

struct Base{
	char Nazwa[20];
	char typ[20];
	int cena;
};

void rewind(FILE *f); 
void exit(int status);

int main(){
int op;
char d;
FILE *fp;
fp = fopen("Gdata.dat", "a");
FILE *ff = fopen("Gdata.dat", "r");
    if (ff == NULL)
    {
        perror("Unable to open file Gdata.dat");
        return 1;
    }
while (1){
	rewind(ff);
    int c;
    while (1){
	printf("To read file Gdata.dat press 'r' to exit press 'p' press enter to continue \n or press 'c' to clear console\n");
	d = getch();
	if(d =='p')exit(1);
	else if(d == 'c')system("cls");
	else if(d == 'r'){
	fopen("Gdata.dat", "r");
    while(1) {
      c = fgetc(ff);
      if( feof(ff) ) {
	  	
      	fclose(ff);
        break ;
	}
      printf("%c", c);
	}
	fclose(ff);
	rewind(ff);
	printf("\n");
	}
	else break;
	}
	struct Base B;
	printf("Name of Object in game without space '_'\n");
	scanf("%s", &B.Nazwa);
	printf("Type\n");
	scanf("%s", &B.typ);
	printf("Price in 'gold' \n");
	scanf("%d", &B.cena);
	fprintf(fp,"Object = %s \nType = %s \nPrice = %d\n", B.Nazwa, B.typ, B.cena);
	printf("Saved:\nObject = %s \nType = %s \nPrice = %d\n\n", B.Nazwa, B.typ, B.cena);
	fclose(fp);
	getchar();
	}

}
