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
	printf("Nhap x = ");
	scanf("%d",&x);
	
	int d = 0,a;
	for(int i=0;i<n;i++){
		if(abs(player[i] - x) > d){
			d = abs(player[i] - x);
			a = player[i];
		}
	}
	printf("Gia tri trong mang xa %d nhat la: %d",x,a);
	
}
	
