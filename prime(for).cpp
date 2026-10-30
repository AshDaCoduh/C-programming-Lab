/*wap to check whether a number is prime or not using
i>while loop
ii>for loop*/

#include <stdio.h>
int main(){
	int n,c=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if (n%i==0)
		   c++; 	      
	}
	if (c==2)
	printf("prime :) ");
	else
	printf("nahhh not prime :()");
} 