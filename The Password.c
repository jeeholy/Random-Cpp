#include <stdio.h>
#include<string.h>

int main()
{
	char a[45];
	scanf("%s", &a);
  
  	int cntA, cnta, cntn, cntp;
  	cntA = cnta = cntn = cntp = 0;
  
  	if(strlen(a)>=3 && strlen(a)<=20){
    		int len = strlen(a);
    		for(int i=0; i<len; i++){
      			if(a[i]>64 && a[i]<91) cntA++;
      			else if(a[i]>96 && a[i]<123) cnta++;
      			else if(a[i]>47 && a[i]<58) cntn++;
      			else cntp++;
    		}
    		if(cntA>0 && cnta>0 && cntn>0 && cntp>0) 
			printf("Valid");
    		else 
			printf("Invalid");
  	}
  	else 
		printf("Invalid");
	return 0;
}
