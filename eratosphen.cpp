#include <iostream>

using namespace std;

int *prime_numbers (int n)
{
  int *a, i;

  a = new int[n];

  for (i = 0; i < n; i++) {
        a[i] = i;
    }

    a[1] = 0;

    i = 0;

    while (i < n) {
        if (a[i] != 0) {
            int j = i + i;
            while (j < n) {
                a[j] = 0;
                j += i;
            }
        }
        i++;
    }
  return a;
}

int
main ()
{
  int *b, n;
  
  cin >> n;


  b = new int[n];

  b = prime_numbers (n);

  for (int i = 0; i < n; i++)
    {
      cout << b[i] << " ";
    }
  return 0;
}