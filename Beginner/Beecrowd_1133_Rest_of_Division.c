#include<stdio.h>
int main(void)
{
  int n,i =0,a,b;
  scanf("%d %d", &a,&b);

  if(a>b)
  {
    int temp = a;
    a = b;
    b = temp;
  }
  for(i=a+1; i<b; i++)
  {
    if((i%5 == 2) || (i%5 == 3))
    printf("%d\n", i);
    
  }
}