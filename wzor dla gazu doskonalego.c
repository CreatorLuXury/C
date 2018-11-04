#include <stdio.h>
#define R 8.314 // stala clapeyrona 

int main()
{
	float P, V, N, T;
	printf("program oblicza wybrana wartosc P (cisnienia) V (objetosci) N (moli) lub T (temperatury)\n");
	printf("Wpisz P (cisnienie [Pa]), jesli szukasz tej wartosci wpisz 0\n");
	scanf("%f", &P);
	printf("Wpisz V (objetosc w m^3), jesli szukasz tej wartosci wpisz 0\n");
	scanf("%f", &V);
	printf("Wpisz N (liczba moli), jesli szukasz tej wartosci wpisz 0\n");
	scanf("%f", &N);
	printf("Wpisz T (temperatura w kelwinach), jesli szukasz tej wartosci wpisz 0\n");
	scanf("%f", &T);
	if(V!=0 && N!=0 && T!=0){
	printf("Szukana wartosc to P\n");	
	P=(N*T*R)/V;
	printf("Szukana wartosc P to %f \n", P);
	}
	else if(P!=0 && N!=0 && T!=0){
	printf("Szukana wartosc to V\n");
	V=(N*R*T)/P;
	printf("Szukana wartosc V to %f m^3", V);
	}
	else if(P!=0 && V!=0 && N==0 && T!=0){
	printf("Szukana wartosc to N \n");
	N=(P*V)/(R*T);
	printf("Szukana wartosc N to %f moli", N);	
	}
	else if(P!=0 && V!=0 && N!=0){
	printf("Szukana wartosc to T\n");
	T=(P*V)/(N*R);
	printf("Szukana wartosc T to %f kelwinow", T);
	}
	return 0;
	getchar();
}

