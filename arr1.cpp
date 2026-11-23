/*wap to take an array input and display the inputs*/
#include <stdio.h>
int main(){
	int n;
	printf("Enter value of N :\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements into the array :---------------\n");
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("THE ELEMENTS ARE :-------------------\n");
	for (int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("The Addresses of the elements are :----------\n");
	for (int i=0;i<n;i++){
		printf("%u ",&a[i]);
	}
	return 0;
}