#include<stdio.h>
int main(void)
{
  int i,n;
  float s,a,b;
  scanf("%d",&n);

  for(i=0; i<n; i++ )
  {
    scanf("%f %f", &a, &b);

    if(b== 0 )
    {
      printf("divisao impossivel\n");
    }
    else
    {
      s= a/b;
      printf("%.1f\n", s);
    }
    
  }
  return 0;
}