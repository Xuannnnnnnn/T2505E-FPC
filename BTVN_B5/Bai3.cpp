#include <stdio.h>

int main (){
	
	int n, a=1, s=0;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	
	while(a <= (n/2)){
		if(n%a==0){
			s=s+a;
			a++;
		}else{
			a++;
		}
	}
	 if(s==n){
	 	printf("%d la so hoan hao",n);
	}else{
		printf("%d khong la so hoan hao",n);
	}
	
}
