#include <stdio.h>

int main(){
	int n, a=1, b=1, c=2, f=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	if(n==1||n==2){
		printf("Khong co tiem can duoi cua %d",n);
	}else{
		while(f<n){
			f = a + b;
			a = b;
			b = f;
			c++;
		}	
		printf("So tiem can voi %d thuoc day Fibonacci la : F(%d) = %d",n,c-1,a);
	}
	
}
