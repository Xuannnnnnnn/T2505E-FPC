#include<stdio.h>

int isPrime(int n){
	
	int c = 1;	
	
	if(n==1){
		c = 0;
	}else{
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				c = 0;
				break;
			}
		}	
	}
	return c;
}

int main(){
	int n;
	printf("Nhap mot so nguyen duong: ");
	scanf("%d",&n);
	int x = isPrime(n);
	if (x==0){
		printf("So %d khong la so nguyen to",n);
	}else{
		printf("So %d la so nguyen to",n);
	}
}
