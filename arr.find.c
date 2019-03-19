#include <stdio.h>
#include <time.h>
#include <stdlib.h>

# define N_N 10 

void wypelnij(int (*tab)[N_N], int N){
	int i,j,x;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			x = rand()%100;
			tab[i][j] = x;
			*(*(tab+i)+j) = x;
		}
	}
}

void wypisz(int (*tab)[N_N], int N){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%2d ", *(*(tab+i)+j));
		}
		printf("\n");
	}
	printf("\n\n");
}

void znajdz(int (*tab)[N_N], int N){
	int max,i,j;
	int ind1, ind2, ind3, ind4;
	max = 1;
	int min = 99;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
		if(tab[i][j] > max){
			max = tab[i][j];
			ind1 = j;
			ind2 = i;
			}
		if(tab[i][j] < min){
			min = tab[i][j];
			ind3 = j;
			ind4 = i;
			
			}
		}	
	}
	printf("\nmax = %d o indexie[%d][%d]", max, ind1, ind2);
	printf("\nmin = %d o indexie[%d][%d]",  min, ind3, ind4);
}

int main(){
	srand(time(0));
	int nr;
	int tab[N_N][N_N];
	wypelnij(tab, N_N);
	wypisz(tab, N_N);
	znajdz(tab, N_N);
}
