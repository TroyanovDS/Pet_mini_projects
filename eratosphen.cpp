#include <iostream>
#include <list>
#include <iterator>
using namespace std;

list <int> prime_number(int n)
{
    int i;
    list <int> count;
    list <int>::iterator it;
    for (int j = 1; j <= 100; j++)
    {
        count.push_back(j);
    }
    for (it = count.begin(); it != count.end(); it++)
    {
        if (*it == 1)
        {
            *it = 0;
        }
        
        else if ((*it % 2 == 0) && (*it != 2))
        {
            *it = 0; 
        }
        
        else if((*it % 3 == 0) && (*it != 3))
        {
            *it = 0;
        }
        
        else if((*it % 5 == 0) && (*it != 5))
        {
            *it = 0;
        }
    }
    
    return count;
}
int main()
{
    list <int> prime;
    list <int>::iterator it;
    
    prime = prime_number(100);
    
    for (it = prime.begin(); it != prime.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}