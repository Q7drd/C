#include <stdio.h>

int carpim(int x,int y)
{
	int sonuc;
	if(y==1)
	{
		sonuc=x;
	}
	else
	{
		sonuc=x+carpim(x,y-1);
	}
	return sonuc;
}

int main()
{
	int x,y;
	printf("iki adet sayi giriniz");
	scanf("%d%d",&x,&y
	);
	printf("%d x %d = %d",x,y,carpim(x,y));
	
	return 0 ;
}
