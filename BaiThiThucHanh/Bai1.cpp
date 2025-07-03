#include<stdio.h>
int main(){
	int n, s = 0;
	printf("Nhap so nguyen duong n: ");
	scanf("%d",&n);
	
	for(int i= 1;i<=n;i++){
		s = s + i;
	}
	
	printf("Tong tu 1 den n la: %d",s);
}
