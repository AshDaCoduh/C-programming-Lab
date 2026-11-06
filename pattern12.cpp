//wap centred angle triangle 
#include <stdio.h>
int main(){
	for (int i=0;i<=3;i++){
		for (int j=0;j<=6;j++){
			if (i+j==3)
			printf("*");
			else if (j-i==3)
			printf("*");
			else if (i==3)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
