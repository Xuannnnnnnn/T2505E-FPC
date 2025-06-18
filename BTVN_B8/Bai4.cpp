#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,x;
	do{
		printf("Nhap so pt cua mang: ");
		scanf("%d",&n);	
	}while(n<=0);
	int player[n];
	
	for (int i=0;i<n;i++){
		printf("Nhap pt vao mang: ");
		scanf("%d",&player[i]);
	}
	int d=0;
	for(int i=0;i<n;i++){
		if(abs(player[i])>d){
			d = abs(player[i]);
		}
	}
	printf("Khoang [%d,%d] chua tat ca gia tri cua mang",-d,d);
}
