#include <stdio.h>
#include <math.h>

int main(){
	int n,a;
	printf("Nhap n : ");
	scanf("%d",&n);
	a = n-1;
	
	while(a>0){
		if(a%6 == 0){
			printf("So lon nhat nho hon %d chia het cho 2 va 3 la : %d",n,a);
			break;
		}else{
			a = a-1;
		}
	}
	
}
