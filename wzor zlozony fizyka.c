#include <stdio.h>
#define R 8.314

int main()
{
	float P, V, N, T;
	printf("program oblicza wybran¹ wartoœæ P V N R lub T\n");
	printf("Wpisz P, jesli szukasz tej wartosci wpisz 0\n");
	scanf("%f", &P);
	printf("Wpisz V, jesli szukasz tej wartosci wpisz 0\n");
	scanf("%f", &V);
	printf("Wpisz N, jesli szukasz tej wartosci wpisz 0\n");
	scanf("%f", &N);
	printf("Wpisz T, jesli szukasz tej wartosci wpisz 0\n");
	scanf("%f", &T);
	if(V!=0 && N!=0 && T!=0){
	printf("szukana wartosc to P\n");	
	P=(N*T*R)/V;
	printf("Szukana wartosc P to %f \n", P);
	}
	else if(P!=0 && N!=0 && T!=0){
	printf("szukana wartosc to V\n");
	V=(N*R*T)/P;
	printf("Szukana wartosc V to %f", V);
	}
	else if(P!=0 && V!=0 && N==0 && T!=0){
	printf("szukana wartosc to N\n");
	N=(P*V)/(R*T);
	printf("Szukana wartosc N to %f", N);	
	}
	else if(P!=0 && V!=0 && N!=0){
	printf("szukana wartosc to T\n");
	T=(P*V)/(N*R);
	printf("Szukana wartosc T to %f", T);
	}
	return 0;
	getchar();
}

