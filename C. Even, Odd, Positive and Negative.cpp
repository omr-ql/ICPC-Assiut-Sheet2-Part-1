#include <iostream>
using namespace std;
int main()
{
    int counter;
    cin >> counter;
    int even = 0, odd = 0, postive = 0, negative = 0;
    for (int i = 0; i < counter; i++)
    {
        int num;
        cin >> num;

        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (num > 0)
        {
            postive++;
        }
        else if (num < 0)
        {
            negative++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << postive << endl;
    cout << "Negative: " << negative << endl;
}