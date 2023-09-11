#include <iostream>

using namespace std;

float min_rad(float l, int n, float *a)
{
    float d = a[0];
    
    if (n == 1)
    {
        if(a[0] <= l - a[0])
        {
            d = l - a[0];
        }
    }
    
    else
    {
        if (a[0] <= l - a[n - 1])
        {
            d = l - a[n - 1];
        }
        for (int i = 1; i < n; i++)
        {
            if(d <= (a[i] - a[i - 1]) / 2)
            {
                d = ((a[i] - a[i - 1]) / 2);
            }
        }
        
        
    }
    
    return d;
}
int main()
{
    float *a, l; 
    int n;
    
    a = new float [n];
    
    cout << "length: ";
    cin >> l;
    
    cout << "count of flashlights: ";
    cin >> n;
    
    for (int i; i < n; i++)
    {
        cout << "a[" << i << "] = "; 
        cin >> a[i];
    }
    
    
    float d = min_rad(l, n, a);
    
    cout << "minimal radius: " << d << endl;

    return 0;
}