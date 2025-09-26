#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string findcolor(string name)
{
    if (name == "red") {return "\033[31m";}
    else if (name == "blue") {return "\033[34m";}
    else {return "none";}
}

string findcolor2(string name)
{
    if (name == "red") {return "\033[41m";}
    else if (name == "blue") {return "\033[44m";}
    else {return "none";}
}

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
    
    string compiledfore = findcolor(fore);
    string compiledback = findcolor2(back);
    
    cout << compiledfore;
    cout << compiledback;
    
    cout << "hjafihaeof \n heiahgfouigsui \n vhanuibeig \n";
    cout << "\033[0m";
    
    // 3
    
    int x = 16; int y = 8;
    char symbol = '*'; string compiledci = findcolor("red"); string compiledco = "\033[0m";
    string buffer = "";
    // cin >> ...
    if (compiledci == "none") {compiledci = "";}
    buffer += compiledci;
    for (int cy = 0; cy < y; cy++)
    {
        if ((cy == 0) || (cy == (y - 1)))
        {
            for (int cx = 0; cx < x; cx++)
            {
                buffer += symbol;
            }
        }
        else
        {
            for (int cx = 0; cx < x; cx++)
            {
                if ((cx == 0) || (cx == (x - 1)))
                {
                    buffer += symbol;
                }
                else
                {
                    buffer += ' ';
                }
            }
        }
        buffer += '\n';
    }
    buffer += compiledco;
    cout << buffer;
    
    // 4
    srand(time(0));
    int array[64]; int latest_max; int latest_min;
    for (int i = 0; i < 64; i++)
    {
        array[i] = rand() - 1000000000;
    }
    // Simplfiable into one loop
    latest_max = array[0]; latest_min = array[0];
    for (int i = 1; i < 64; i++)
    {
        if (array[i] > latest_max) {latest_max = array[i];}
        if (array[i] < latest_min) {latest_min = array[i];}
    }
    cout << "Max: " << latest_max << "\nMin: " << latest_min << "\n";
    
    return 0;
}