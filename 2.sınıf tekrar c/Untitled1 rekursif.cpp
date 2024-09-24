 #include <stdio.h>

void foo(int x){
	printf("%3d",x);
	if(x<9)
	{
		foo(x+1);}
		printf("%3d",x);
}

int main(){
	foo(1);
	return 0 ;
	
}

