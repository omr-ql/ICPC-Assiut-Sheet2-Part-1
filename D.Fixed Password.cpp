#include <iostream>
using namespace std;
int main()
{
    int password;
    cin >> password;
    while (true)
    {
        if (password == 1999)
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
            return main();
        }
    }
}