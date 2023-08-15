#include <iostream>
#include <iterator>
#include <set>
using namespace std;

int main()
{
    multiset<int> data;
    int n;
    
    cout << "Запишите начальное количество элементов: ";
    cin >> n;
    
    multiset <int>::iterator it;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        data.insert(a);
    }
    
    for (it = data.begin(); it != data.end(); it++)
    {
        cout << *it << " ";
    }
    
    cout << endl;
    
    int m;
    
    cout << "Введите кол-во операций: ";
    cin >> m;
    
    string operation;
    
    for (int i = 0; i < m; i++)
    {
        cout << "Введите операцию: ";
        cin >> operation;
        
        if ((operation == "add") || (operation == "+")) //+ или add добавить новый элемент;
        {   
            int t;
            cin >> t;
            data.insert(t);
            for (it = data.begin(); it != data.end(); it++)
            {
                cout << *it << " ";
            }
            
            cout << endl;
        }
        
        if ((operation == "Delete_all") || (operation == "--")) //Delete_all удалить все элементы с данным значением
        {
            int t;
            cin >> t;
            
            data.erase(t);
            
            for (it = data.begin(); it != data.end(); it++)
            {
                cout << *it << " ";
            }
            
            cout << endl;
        }
        
        
        if(operation == "Clear") //Clear - очистить хранилище
        {
            data.clear();
            for (it = data.begin(); it != data.end(); it++)
            {
                cout << *it << " ";
            }
            
            cout << endl;
        }
        
        auto sum = 0;
        if(operation == "Sum") //Sum - показать сумму элементов на экран(в т.ч строк)
        {
            for (it = data.begin(); it != data.end(); it++)
            {
                sum += *it;
            }
            cout << "Sum= " << sum << endl;
            
            for (it = data.begin(); it != data.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
        }
        
        int k;
        
        if (operation == ">=") //>= показывает первый элемент, больший либо раный данному
        {
            
            cin >> k;
            for (it = data.begin(); it != data.end(); it++)
            {
                if(*it >= k)
                {
                    cout << *it << endl;
                    break;
                }
            }
            
            for (it = data.begin(); it != data.end(); it++)
            {
                cout << *it << " ";
            }
            
            cout << endl;
        }
        
        if (operation == ">") //> показывает первый элемент больший данного
        {
            cin >> k;
            for (it = data.begin(); it != data.end(); it++)
            {
                if(*it > k)
                {
                    cout << *it << endl;
                    break;
                }
            }
            
            for (it = data.begin(); it != data.end(); it++)
            {
                cout << *it << " ";
            }
            
            cout << endl;
        }
        
        if ((operation == "delete") || (operation == "-")) //- или delete удалить один элемент с данным значением;
        {
            int t;
            cin >> t;

            it = data.find(t);
            
            data.erase(it);
            
            for (it = data.begin(); it != data.end(); it++)
            {
                cout << *it << " ";
            }
            
            cout << endl;
        }
        
        if(operation == "find")
        {
            int t, k;
            cin >> t;
            
            k = 0;
            
            for (it = data.begin(); it != data.end(); it++)
            {
                if (*it != t)
                {
                    k++;
                }
                else
                {
                    break;
                }
            }
            if (*it == t)
            {
                cout << k + 1 << endl;
            }
            else 
            {
                cout << "Нет такого элемента" << endl;
            }
        }
        
        if(operation == "count")
        {
            int t, k = 0;
            cin >> t;
            
            for (it = data.begin(); it != data.end(); it++)
            {
                if (*it == t)
                {
                    k++;
                }
            }
            
            if (k == 0)
            {
                cout << "нет таких элементов" << endl;
            }
            
            else
            {
                cout << k << endl;
            }
        }
    }



    return 0;
}