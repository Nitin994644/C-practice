#include<stdio.h>

int factorial(int number)
{
    int n=1;
    for(int i=1;i<=number;i++){
      n = n*i; 
    }
    return n;
}

// Note: Don't add any other printf statement which will impact test cases. 
//Also don't change main function, focus function implementation only
int main() {
  int num = 0, N = 0;

  scanf("%d",&N);
  for(int i = 0; i< N; i++)
  {
    scanf("%d", &num);
    printf("%d\n",factorial(num));
  }
    
  return 0;
}