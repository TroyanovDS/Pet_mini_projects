#include <iostream>
#include <ctime>
using namespace std;

void mas (int *a, int n)
{
    
    cout << "Введите массив: ";
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
}

void change(int *a, int n)
{
    int i, j;
    int k;
    
    
    i = rand () % n;
    j = rand () % n;
    
    k = a[i];
    a[i] = a[j];
    a[j] = k;

}

bool IsSorted (int *a, int n, bool &flag)
{
    int k = 0, l = 0;
    for (int i = 1; i < n; i++) 
    {
        if (a[i - 1] <= a[i])
        {
            k++;
        }
        
        else if (a[i - 1] >= a[i])
        {
            l++;
        }
    }
    
    if (k == n)
    {
        cout << "Массив отсортирован по возрастанию" << endl;
        flag = true;
    }
    
    else if (l == n)
    {
        cout << "Массив отсортирован по убыванию" << endl;
        flag = true;
    }
    
    else
    {
        cout << "Массив не отсортирован" << endl;
    }
}
int main()
{
    int *a, n;
    bool flag = false;
    cout << "Введите размер массива: ";
    cin >> n;

    a = new int [n];
    
    mas(a, n);
    
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
    
    int count;
    while(flag == false)
    {
        change(a, n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        
        count++;
        
        IsSorted(a, n, flag);
        
        if (flag == true)
        {
            break;
        }
        
    }
    
    cout << "Для сортировки потребовалось " << count << " шагов" << endl;

    return 0;
}