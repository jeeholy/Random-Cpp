#include <stdio.h>

int main()
{
	int x, n;
  scanf("%d %d", &x, &n);
  
  int f[100], t[100];
  char a[100][25];
  
  for(int i=0; i<n; i++){
    scanf("%d %d ", &f[i], &t[i]);
    gets(a[i]);
  }
  for(int i=0; i<n; i++){
    if(x>=f[i] && x<=t[i]){
      printf("%s", a[i]);
      break;
    }
  }
	return 0;
}
