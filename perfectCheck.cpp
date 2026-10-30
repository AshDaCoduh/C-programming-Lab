/*wap to check whether a number is perfect or not.*/
#include <stdio.h>
int main(){
	int n,s=0;
	scanf("%d",&n);
	for (int i=1;i<=n/2;i++)
	{
		if (n%i==0)
		   s+=i;
	}
	if (s==n)
	printf("perfect");
	else
	printf("imperfect ..heh");
}
