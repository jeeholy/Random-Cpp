#include <stdio.h>

int main()
{
  	int n;
  	scanf("%d", &n);
  	int i=0;
  	for(i; i<n; i++)
    		printf("#");
  	int j=0;
  	for(j; j<n-2; j++)
  	{
    		printf("\n#");
		int k=0;
    		for( k; k<n-2;k++)
      			printf(" ");
    		printf("#");
  	}
  	printf("\n");
  	i=0;
  	for(i; i<n; i++){
    		if(n==1) break; 
    		printf("#");
  	}
  return 0;
}
