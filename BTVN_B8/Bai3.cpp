#include <stdio.h>
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
	
	int min=0;
	for(int i=0;i<n;i++){
		if(player[i]<min){
			min = player[i];
		}
	}
	
	int max=0;
	for(int i=0;i<n;i++){
		if(player[i]>max){
			max = player[i];
		}
	}
	
	printf("Khoang [%d,%d] chua tat ca gia tri cua mang",min,max);
	
}
