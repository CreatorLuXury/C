/* BY CREATOR_LUXURY */
#include <stdio.h>
#include <time.h>
#include <windows.h>

int random()
	{
	int c, zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);
    c = rand()%6;
    if(c==0)c=c+1;
    return c;
	}
void exit(int status);// wyjscie

int sekundy(){//czas w sekundach
clock_t sekundy;
double time_spent;
sekundy = clock();
sekundy*=0.001;
return sekundy;
}
int minuty(){// czas w minutach
clock_t minuty;
double time_spent;
minuty = clock();
minuty=minuty*(1.66666667*0.00001);
return minuty;
}

int main(){
nowy:;
printf("PORUSZASZ SIE TYLKO W GORE I W DOL KLAWISZEM W i S KLAWISZ P to wyjscie\n");
printf("Wcisnij W lub S aby rozpoczac\n");
printf("Zlap X zeby zdobyc wiecej punktow!\n");
	int i,j,x,y,z,o,t,punkty=1;
	int m,n,u,d;
	char k;
	x = 2;
	y = 1;

	int	p11 = 3;
	int	p21 = 20;
	int	p31 = 17;
	int	p41 = 7;
	int	p51 = 12;
	int	p12 = 5;
	int	p22 = 8;
	int	p32 = 13;
	int	p42 = 18;
	int	p52 = 20;
start:;
	system("color 3F");// kolor tla i ikonek
	int	m1 = 1;
	int	m2 = 2;
	int	m3 = 3;
	int	m4 = 4;
	int	m5 = 5;
	char droga[7][22] = {// sciezka dla pojazdu
	{254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',254},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',254},	
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',254},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',254},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',254},
	{254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254}	
	};
	znak:;// powrot po zlym znaku
	k = getch();
	system("cls");
	if(k == 'w')droga[x-=1][y];// implementacja ruchu klawiszy
	else if(k == 's')droga[x+=1][y];
//	else if(k == 'd')droga[x][y++];
	else if (k == 'p')exit(1);
	else goto znak;
	if(x==0 || x==6)goto lost;
	else;
	u=random();// randomowa linia dla bonusu
	if(d==0)d=20;
	droga[u][d--] = (char)'x';// obliczenie dla bonusowego znaku
	if(p11==0)p11=19;// wypisane objekty 'lecace'
	else if (p12==0)p12=19;
	else if (p21==0)p21=20;
	else if (p22==0)p22=20;
	else if (p31==0)p31=20;
	else if (p32==0)p32=20;
	else if (p41==0)p41=20;
	else if (p42==0)p42=20;
	else if (p51==0)p51=20;
	else if (p52==0)p52=20;
	else
	droga[m1][p11--] = (char)15;
	droga[m1][p12--] = (char)15;	
	droga[m2][p21--] = (char)15;
	droga[m2][p22--] = (char)15;
	droga[m3][p31--] = (char)15;	
	droga[m3][p32--] = (char)15;
	droga[m4][p41--] = (char)15;
	droga[m4][p42--] = (char)15;
	droga[m5][p51--] = (char)15;
	droga[m5][p52--] = (char)15;
	
	if(droga[x][y]== (char)15)goto lost;
	if(droga[x][y]== (char)'x'){
	system("color 2E");
	punkty+=100;
	printf("MASZ GO, niezle! zdobywasz dodatkowe 100PKT! aktualne pkt to %d\n", punkty);
	}
	for(i=0;i<7;i++){// pokazanie tablicy
		for(j=0;j<22;j++){
			printf("%c", droga[i][j]);
						droga[x][y] = 169;// pojazd
		}
		printf("\n");
	}
	punkty=punkty+1;
	t = minuty();
	if(sekundy()>=60)printf("%d minut %d sekund\n", minuty(), sekundy()-(60*t));// implementacja czasu na dole planszy
	else printf("%d minut %d sekund\n", minuty(), sekundy());
	printf("%d punktow\n", punkty);
	goto start;
	lost:;
	system("color 4F");
	if(punkty >= 200)printf("NIEZLE ZDOBYLES AZ %d punktow a twoj czas to %d min i %d sek \n", punkty, minuty(), sekundy());
	else if(x==0 || x==6)printf("KONIEC, uwazaj na bande! Twoj czas to %d minut i %d sekund!! a punkty to az %dpkt\n",minuty(), sekundy(), punkty);
	else printf("przegrales, nastepnym razem bedzie lepiej :) twoj czas to  %d minut i %d sekund a twoje punkty to az %dpkt\n", minuty(), sekundy(),punkty);
	printf("nacisnij enter aby rozpoczac\n");
	getchar();
	system("cls");
	goto nowy;
return 0;
}
