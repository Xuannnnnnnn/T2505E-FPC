#include <stdio.h>

int main (){
	float a,x;
	printf("Nhap so dien: ");
	scanf("%f",&a);
	
	if(a>200){
		x=(a-200)*2.536+372;
		printf("So tien dien phai tra la: %f nghin dong",x);
	}else{
		if(a>100){
			x=(a-100)*2.014+170.6;
			printf("So tien dien phai tra la: %f nghin dong",x);
		}else{
			if(a>50){
				x=(a-50)*1.734+83.9;
				printf("So tien dien phai tra la: %f nghin dong",x);
			}else{
				x=a*1.678;
				printf("So tien dien phai tra la: %f nghin dong",x);
			}
		}
	}
}
