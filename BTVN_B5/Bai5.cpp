#include <stdio.h>

int main(){
	int n, a=1, b=1, c=2, f;
	printf("Nhap n : ");
	scanf("%d",&n);
	
	if(n==1||n==2){
		printf("So Fibonacci  thu %d la : F(%d) = 1",n,n);
	}else{
		while(n>c){
			f = a+b;
			a = b;
			b = f;
			c++;
		}
		{
			printf("So Fibonacci  thu %d la : F(%d) = %d",n,n,f);
		}
	}

}
