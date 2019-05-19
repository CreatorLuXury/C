#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 200

void wypelnij(int (*tab), int a){
	int i,x;
	for(i=0;i<a;i++){
			x = (rand()%10)+1;
			tab[i] = x;
	}
}

void wypisz(int (*tab), int a){
	int i;
	for(i=0;i<a;i++){
			printf("%3d ", tab[i]);
		}
	printf("\n\n");
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

void scal(int tab[], int tab_tmp[], int lewy, int prawy){
	int k;
	int srodek = (lewy+prawy)/2;
	for(k= lewy; k<=prawy; k++){
		tab_tmp[k] = tab[k];
	}
	int i = lewy;
	int j = srodek+1;
	
	for (k=lewy; k<= prawy;k++){
		if(i<=srodek){
			if(j<= prawy){
				if(tab_tmp[i] < tab_tmp[j]){
					tab[k] = tab_tmp[i++];
				}
				else{
					tab[k] = tab_tmp[j++];
				}
			}
			else{
			tab[k] = tab_tmp[i++];
			}			
		}
		else {
			tab[k] = tab_tmp[j++];
		}
	}
}
void slice(int tab[], int tab_tmp[], int lewy, int prawy){
	if(lewy >= prawy) {
		
	return;	
	}
	int srodek = (lewy+prawy)/2;
	
	slice(tab,tab_tmp,lewy, srodek);
	slice(tab,tab_tmp,srodek+1,prawy);
	
	scal(tab,tab_tmp,lewy,prawy);
	
}
void merge_sort(int *tab, int a){
		int *tab_tmp = malloc(sizeof(tab[0])*a);
		
		slice(tab, tab_tmp,0,a-1);

		free(tab_tmp);
}

int main()
{
	srand(time(0));
	int nr;
	int *tab = malloc(sizeof(int) * N);
	int *tab_tmp;
	tab_tmp = malloc(N * sizeof(int));
	free(tab_tmp);
	wypelnij(tab, N);
	wypisz(tab, N);
	merge_sort(tab,N);
	wypisz(tab,N);
}
