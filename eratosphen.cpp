#include <iostream>

using namespace std;

int *prime_numbers (int n)
{
  int *a;

  a = new int[n];

  for (int i = 0; i < n; i++)
    {
      a[i] = i + 1;
    }


  a[0] = 0;

  for (int j = 1; j < n; j += 2)
    {
      a[j] = 0;
    }

  for (int j = 2; j < n; j += 3)
    {
      a[j] = 0;
    }
    
    for (int j = 9; j < n; j += 5)
    {
        a[j] = 0;
    }


  return a;
}

int
main ()
{
  int *b, n = 200;

  b = new int[n];

  b = prime_numbers (n);

  for (int i = 0; i < n; i++)
    {
      cout << b[i] << " ";
    }
  return 0;
}
