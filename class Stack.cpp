#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Stack
{
    int n;
    vector<T> a;
public:

Stack(T *b, int m)
{
    n = m;
    
    for (int i = 0; i < m; i++)
    {
        a.push_back(b[i]);
    }
    
}

void push (T k)
{
    a.push_back(k);
}

T pull ()
{
    T k;
    
    k = a.back();
    
    a.pop_back();
    
    return k;
}
};



int main()
{
    
    int *b, n = 3;
    
    b = new int [n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    
    Stack <int> stack (b, n);
    
    
    for (int i = 0; i < n; i++)
    {
        cout << stack.pull() << " ";
    }
    


    return 0;
}