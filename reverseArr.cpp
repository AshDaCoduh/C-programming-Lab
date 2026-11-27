#include <stdio.h>
int main(){
	int n,t;
	printf("Enter value of N :- \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements into the array :- \n");
	for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
	//Reversing 
	for (int i=0;i<n/2;i++){
		t=a[i];//1 
		a[i]=a[n-1-i];//5
		a[n-1-i]=t;//1
	}
	//printing 
	for (int i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}