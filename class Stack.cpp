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

void show()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void stack_show()
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
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
    
    cout << endl;
    
    cout << "Вектор: ";
    
    stack.show();
    
    cout << endl;
    
    cout << "Перевёрнутый вектор: "; 
    
    stack.stack_show();
    
    cout << endl;

    return 0;
}