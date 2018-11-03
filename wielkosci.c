#include <stdio.h>

int main()
{
int a,d;
float b, c,km=1,m=1,dm=1,cm=1,mm=1;
printf("podaj co na co przeliczyc z km 1=m 2=dm 3=cm 4=mm\n");
scanf("%d", &a);
printf("ile km?\n");
scanf("%f", &b);
(km=km*b) == ((m=b*1000) && (dm=b*10000) && (cm=b*100000) && (mm=b*1000000));
if(a==1)printf("%f km to %f m",km, m);
else if(a==2)printf("%f km to %f dm", km, dm);
else if(a==3)printf("%f km to %f cm", km, cm);
else if(a==4)printf("%f km to %f mm", km, mm);
else printf("blad podaj poprawna liczbe A");
getchar();
}
