#include <iostream>

using namespace std;

pair <int, int> get_max_count (int *a, int n)
{
    pair <int, int> p;
    
    int i, j;
    
    int k = 1;
    
    p.first = a[0];
    
    for (i = 1; i < n; i++)
    {
        if(p.first < a[i])
        {
            p.first = a[i];
            k = 1;
        }
        else if(p.first == a[i])
        {
            k++;
        }
    }
    
    p.second = k;
    
    return p;

}

int second_max (int *a, int n)
{
    int i, j;
    
    int max1, max2;
    
    if (a[0] > a[1])
    {
        max1 = a[0];
        max2 = a[1];
    }
    
    else
    {
        max1 = a[1];
        max2 = a[0];
    }
    
    for (i = 2; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2)
        {
            max2 = a[i];
        }
        
        
    }
    return max2;
    
}


int main()
{
    int *a, n;
    
    int max2;
    
    cin >> n;
    
    a = new int [n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    pair <int, int> p;
    
    p = get_max_count(a, n);
    
    cout << "max: " << p.first << " count max: " << p.second << endl;

    max2 = second_max(a, n);
    
    cout << "second max is: " << max2 << endl;
    
    return 0;
}