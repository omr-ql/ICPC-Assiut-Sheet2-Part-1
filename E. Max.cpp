#include <iostream>
using namespace std;
int main()
{
    int counter, max;
    cin >> counter;
    for (int i = 1; i <= counter; i++)
    {
        int num;
        cin >> num;
        if (i == 1)
        {
            max = num;
        }
        if (num > max)
        {
            max = num;
        }
    }
    cout << max << endl;
}