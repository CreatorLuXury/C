# include <stdio.h>
# include <time.h>
# define N 8


void wypelnij(int *tab, int a){

	int i;
	for(i=0; i<a; i++){
		*(tab+i) = rand() % 21;
	}
}
void wypisz(int *tab, int a){
	int i;
	for(i=0;i<a;i++){
		printf("%2d ", *(tab+i));
	}
	printf("\n");
}

void sortuj(int *tab, int a){
	int i, we, j;
	for(i=0;i<a;i++){
    we = tab[i];
    j = i - 1;
    while (j>=0 && tab[j]>we){
        tab[j + 1] = tab[j];
    	j = j - 1;
    	tab[j + 1] = we;
 		}
	}
}
/*int czy_posortowany(int tab[], int a){
	int i;
	for(i = 0; i<a-1; i++){
		if(tab[i] > tab[i+1]){
			return 0;
		}
	}
}*/

int main (){
	srand(time(0));
	int tab[N];
	wypelnij (tab, N);
	wypisz (tab, N);
	sortuj (tab, N);
	wypisz (tab, N);
	getchar();
}
