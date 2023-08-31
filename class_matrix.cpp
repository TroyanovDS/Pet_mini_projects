#include <stdio.h>
#include <iostream>

using namespace std;

template <typename T>
class Matrix
{
    int n, m = 2;
    T **a;
public:
Matrix (int _n)
{
    n = _n;
    
    a = new T *[n];
    
    for (int i = 0; i < n; i++)
    {
        a[i] = new T [m];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void reversed_matrix()
{
    T **b;
    
    b = new T *[m];
    
    for (int i = 0; i < m; i++)
    {
        b[i] = new T [n];
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
        }
        
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < m; i++)
    {
        delete [] b[i];
    }
    
    delete [] b;
    
}
};




int main()
{
   Matrix <int> matrix (5);
   
   matrix.reversed_matrix();
   
   
   
    return 0;
}
