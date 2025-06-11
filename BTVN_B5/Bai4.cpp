#include <stdio.h>

int main(){
	int n,a;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	printf("So dao nguoc cua %d la: ",n);
	
	while(n>=1){
		a=n%10;
		printf("%d",a);
		n=n/10;
	}
}
