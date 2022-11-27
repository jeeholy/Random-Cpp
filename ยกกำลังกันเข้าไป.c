#include <stdio.h>

int pow(num, power)
{
	int result = 1;
  	for(int i=0; i<power; i++)
    		result *= num;
  	return result;
}

int main()
{
	int num, power;
 	scanf("%d %d", &num, &power);
  	printf("%d", pow(num, power));
	return 0;
}
