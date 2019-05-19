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


void selec_sort(int *tab, int a){
	int i,j, temp, min;
	for(i=0;i<a;i++){
		min = i;
		for(j=i+1;j<a;j++){
			if(tab[j] < tab[min])min = j;
		}
		temp = tab[i];
		tab[i] = tab[min];
		tab[min] = temp;
	}
}


int main (){
	srand(time(0));
	int tab[N];
	wypelnij (tab, N);
	wypisz (tab, N);
	printf("\n\n\n\n");
	selec_sort (tab, N);
	wypisz (tab, N);
}
