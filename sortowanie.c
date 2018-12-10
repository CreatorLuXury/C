#include <stdio.h>

int main (){
	int i,j, schowek,zmiana;
	int t[10] = {6,5,8,6,4,2,9,5,3,2};
	do{
		zmiana = 0;
	for (i=0;i<10;i++){

		if (t[i]>t[i+1]){
			zmiana = zmiana+1;
			schowek = t[i];
			t[i] = t[i+1];
			t[i+1] = schowek;
		}
	}
}
	while (zmiana!=0);
	for (j=0;j<10;j++){
		printf("%d ", t[j]);
	}
	getchar();
}
