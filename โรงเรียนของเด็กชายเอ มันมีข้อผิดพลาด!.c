#include <stdio.h>

int main()
{
	int a;
  	scanf("%d", &a);
  	if(a >= 0 && a<=100)
	{
    		if(a >= 90)
      			printf("A");
    		else if(a >= 85)
      			printf("B+");
    		else if(a >= 80)
      			printf("B");
    		else if(a >= 75)
      			printf("C+");
   		else if(a >= 70)
      			printf("C");
    		else if(a >= 65)
      			printf("D+");
    		else if(a >= 60)
      			printf("D");
    		else
      			printf("F");
  	}
  	else
	{
    		if(a<0)
      			printf("Error : Value must be greater than or equal to 0.");
    		else 
      			printf("Error : Value must be less than or equal to 100.");
  	}
	return 0;
}
