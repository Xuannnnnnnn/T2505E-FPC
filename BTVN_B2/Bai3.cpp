#include <stdio.h>
 int main(){
 	float a,b,c;
 	printf("a = ");
 	scanf("%f",&a);
 	printf("b = ");
 	scanf("%f",&b);
 	printf("c = ");
 	scanf("%f",&c);
 	
 	if(a+b>c){
 		if(b+c>a){
 			if(a+c>b){
 				printf("3 so a, b, c tao thanh tam giac");
			}else{
				printf("3 so a, b, c khong tao thanh tam giac");	
			}
		}else{
		 	printf("3 so a, b, c khong tao thanh tam giac");	
		}
	}else{
	 	printf("3 so a, b, c khong tao thanh tam giac");
	}
 }
