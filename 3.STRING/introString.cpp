#include <iostream>

using namespace std;

int main()
{
    char str[4] = {'a', 'b', 'c', 'd'};

    for (int i = 0; i < 4; i++)
    {
        cout << str[i] << " ";
    }
    
    char ch = 'A';
    char th = 'a';
    cout << (int)ch - (int)th;
    return 0;
}