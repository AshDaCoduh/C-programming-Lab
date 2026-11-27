/*WAP to find the smallest value in an array*/
#include <stdio.h>
int main(){
	int n,min;
	printf("Enter N :- \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements :- \n");
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=a[0];
	for (int i=0;i<n;i++){
		if (a[i]<min)
		min=a[i];
	}
	printf("Smallest element = %d",min);
	return 0;
}