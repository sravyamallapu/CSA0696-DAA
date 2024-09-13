#include<stdio.h>
int main(){
	int n1=48,n2=18;
	int gcd;
	while (n1!=n2){
		if(n1>n2)
		n1-=n2;
		else
	
		n2-=n1;
		gcd=n1;
	printf("GCD is %d\n",gcd);
	return 0;
}
}
