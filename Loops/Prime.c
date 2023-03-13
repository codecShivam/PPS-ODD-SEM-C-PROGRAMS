#include <stdio.h>

int main()
{
  int i, n, c = 0, j;
  printf("Enter number upto which you want to find prime number:\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      if (i % j == 0)
      {
        c++;
      }
    }
    if (c == 2)
    {
      printf("%d", i);
    }
    c = 0;
  }
  return 0;
}