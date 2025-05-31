#include <stdio.h>
#include <math.h>

int main (){
	float a,b,c,x;
	printf("Giai phuong trinh bac 2 co: a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);
	printf("c = ");
	scanf("%f",&c);

	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			x=-b/a;
			printf("Phuong trinh co 1 nghiem: %f",x);
		}
	}else{
		float t;
		t=b*b-4*a*c;
		if(t<0){
			printf("Phuong trinh bac 2 vo nghiem");
		}else{
			if(t==0){
				x=-b/(2*a);
				printf("Phuong trinh co nghiem kep: %f",x);
			}else{
				float x1,x2;
				x1=(-b+sqrt(t))/(2*a);
				x2=(-b-sqrt(t))/(2*a);
				printf("Phuong trinh co 2 nghiem phan biet: %f, %f",x1,x2);
			}
		}
	}
	
}
