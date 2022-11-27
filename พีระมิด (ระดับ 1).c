#include <stdio.h>

int main()
{
	int n, i=1, a;
	scanf("%d", &n);
  	for(i;i<=n;i++){
    		a = 0;
    		for(a;a<i;a++)
       			printf("*");
     		printf("\n");
	}
	return 0;
}
