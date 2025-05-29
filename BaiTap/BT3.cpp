#include <stdio.h>

int main (){
	int num;
	printf("Nhap num = ");
	scanf("%d",&num);
	
	int r;
	r = num % 2;
	
	if (r == 0){
		printf("La so chan");
	} else {
		printf("La so le");
	}
}
