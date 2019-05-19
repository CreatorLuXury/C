#include <stdio.h>

#define N 999999999

void wpisz(int tab[], int a) {
	int i;
	for( i =0 ; i < a; i++) {
		tab[i] = rand() % 100;
	}
}

void wypisz(int tab[], int a) {
	int i;
	for( i =0 ; i < a; i++) {
		printf("%d ",tab[i]);
	}
	printf("\n");
}

void swap (int *el1, int *el2){
	int tmp = *el1;
	*el1 = *el2;
	*el2 = tmp;
}

int porzadkuj(int *tab,int lewy,int prawy){
	int dzielnik = ( lewy + prawy ) / 2;
	swap(tab+dzielnik,tab+prawy);
	
	int i;
	int j=lewy;
	for(i = lewy; i < prawy; i++){
		if(tab[i] < tab[prawy]){
			swap(tab+i,tab+j);
			j++;
		}
	}
	swap(tab+prawy, tab+j);
	return j;
}

void qs_pomocniczy(int * tab, int lewy, int prawy){
	if(lewy >= prawy) return;
	
	int srodek = porzadkuj(tab,lewy,prawy);
	qs_pomocniczy(tab,lewy,srodek-1);
	qs_pomocniczy(tab,srodek+1,prawy);
}

void quicksort(int * tab, int rozmiar){
	qs_pomocniczy(tab,0,rozmiar-1);
	
}

void babelek(int tab[], int a) {
	int i,j;
	for( i = 0 ; i < a; i++) {
		for( j = 0; j < a-1-i; j++) {
			if(tab[j] > tab[j+1]) {
				int tmp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = tmp;
			}
		}
	}
}

int main(){
	int tab[N];
	wpisz(tab,N);
//	wypisz(tab,N);
	quicksort(tab,N);
//	wypisz(tab,N);
//	babelek(tab,N);
}
	
