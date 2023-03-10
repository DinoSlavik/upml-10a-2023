#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    // розмір масиву
    int n;
    cin >> n;
    
    // створення масиву
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    // знаходження мінімуму
    int min_el = 0;
    for(int i = 1; i < n; i++)
    {
        min_el = fmin(min_el, a[i]);
    }
    
    // виведення максимального елемента
    cout << min_el << endl;
}

