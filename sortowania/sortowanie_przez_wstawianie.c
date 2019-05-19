# include <stdio.h>
# include <time.h>
# define N 12


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

void insert_sort(int *tab, int a){
	int i, we, j;
	for(i=0;i<a;i++){
    we = tab[i];
    j = i - 1;
    while (j>=0 && tab[j]>we){
        tab[j + 1] = tab[j];
    	j--;
    	tab[j + 1] = we;
 		}
	}
}

int main (){
	srand(time(0));
	int tab[N];
	wypelnij (tab, N);
	wypisz (tab, N);
	printf("\n\n\n\n");
	insert_sort (tab, N);
	wypisz (tab, N);
}
