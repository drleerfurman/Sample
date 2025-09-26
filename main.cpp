#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1
    cout << "Year (integer, decimal, unsigned): ";
    int year; cin >> year; bool result;
    int days[2] = {365, 366};
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                result = true;
            }
            else
            {
                result = false;
            }
        }
        else
        {
            result = true;
        }
    }
    else
    {
        result = false;
    }
    cout << "Year is having " << days[result] << " days.\n";
    
    // 2
    
    cout << "Pick console font color (foreground): ";
    string fore; string back; cin >> fore;
    cout << "Pick console font color (background): ";
    cin >> back;
    
    // 3
    
    return 0;
}