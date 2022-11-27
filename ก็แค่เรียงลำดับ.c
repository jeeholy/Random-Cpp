#include <stdio.h>

int main()
{ 
	int a[5];int i = 0;
  	for( i;i<5; i++){
    		scanf("%d", &a[i]);
  	}
	for(i=0; i<5; i++){
		int j=i+1;
	  	for(j; j<5; j++){
      			if(a[i] < a[j]){
    	  			int t= a[i];
        			a[i] = a[j];
        			a[j] = t;
	    		}
    		}
    		a[j] = a[i];
  	}
  	i = 0;
  	for(i;i<5; i++){
    		printf("%d\n",a[i]);
  	}
	return 0;
}
