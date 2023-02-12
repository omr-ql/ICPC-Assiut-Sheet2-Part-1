#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if (num == 1)
    {
        cout << -1 << endl;
    }
    for (int i = 2; i <= num; i = i + 2)
    {
        cout << i << endl;
    }
}