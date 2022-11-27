#include <stdio.h>

int main()
{
	int age;
  	char name[50];
  	gets(name);
  	scanf("%d", &age);
  	if(2022-age >= 18)
    		printf("Welcome %s to NongGipsy Pub", name);
  	else
    		printf("You shall not pass!");
	return 0;
}
