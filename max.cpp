/*WAP to find the largest value in an array*/
#include <stdio.h>
int main(){
	int n,max;
	printf("Enter N :- \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements :- \n");
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for (int i=0;i<n;i++){
		if (a[i]>max)
		max=a[i];
	}
	printf("Largest element = %d",max);
	return 0;
}