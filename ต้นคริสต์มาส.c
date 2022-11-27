#include <stdio.h>

int main()
{
	int a;
  	scanf("%d", &a);
  	for(int i=1; i<=a; i++){
    		for(int k=1;k<=i+1;k++){
      			for(int j=1;j<=a+1-k;j++) printf(" ");
      			for(int o=1; o<=2*(k-1)+1;o++) printf("*");
      			printf("\n");
    		}
  	}
  	for(int i=0;i<a;i++) printf(" ");
  	printf("|\n");
  	for(int i=0;i<a;i++) printf("=");
  	printf("V");
  	for(int i=0;i<a;i++) printf("=");
	return 0;
}
