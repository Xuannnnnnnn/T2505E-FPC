void menu(){
	printf("Danh sach");
}

int total(int a, int b){
	int c = a + b;
	return c;
}

//tinh chu vi
int chuvi(int a, int b, int c){
	int p = a+b+c;
	return p;
}

//tinh dien tich
int dientich(int a, int b, int c){
	 //int p = (a+b+c)/2;
	 int p = chuvi(a,b,c)/2;
	 int s = sqrt(p*(p-a)*(p-b)*(p-c));
	 return s;
}

//tinh tong cac chu so
int tinhtong(int n){
	int a, s = 0;
	while(n>=1){
		a=n%10;
		s = s + a;
		n=n/10;
	}
	return s;
}

//tim uoc chung lon nhat
int UCLN(int a, int b){
	int u;
	for(int i=a;i>=1;i--){
		if(a%i==0 & b%i==0){
			u = i;
			break;
		}
	}
	return u;
}

//tim boi chung nho nhat
int BCNN(int a, int b){
	int c;
	for(int i=a;i<=a*b;i++){
		if(i%a==0 && i%b == 0){
			c = i;
			break;
		}
	}
	return c;
}

//tinh x^y
int luythua(int a, int b){
	int s =1;
	for (int i=1;i<=b;i++){
		s = s*a;		
	}
	return s;
}



























