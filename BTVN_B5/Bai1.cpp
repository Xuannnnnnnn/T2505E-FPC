#include <stdio.h>
int main(){
	int n, a = 1;
	printf("Nhap n : ");
	scanf("%d",&n);
	
	while(a<=n){
		if(a%2 != 0){
			printf("%d ",a);
			a++;
		}else{
			a++;
		}
	}		
}
