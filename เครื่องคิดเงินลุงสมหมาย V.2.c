#include <stdio.h>

int main()
{ 
	int n, sum = 0, m;
  	scanf("%d", &n);
  	while(n--)
	{
    		scanf("%d", &m);
    		sum += m;
  	}
	printf("%d THB", sum);
	return 0;
}
