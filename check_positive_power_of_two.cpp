#include <iostream>
using namespace std;

int even_odd(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int two_power(int num)
{
    int i = 1, power = 0;

    while (i)
    {
        if (even_odd(num))
        {
            num /= 2;
            power++;
            if (num == 1)
            {
                return power;
            }
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int num;
    cout << "Enter a value for checking :- ";
    cin >> num;
    if (num == 1)
    {
        cout << "Power of given no. is " << two_power(num) << endl;
    }
    else if (num < 1)
    {
        cout << "Input is invalid" << endl;
    }
    else
    {
        int check = two_power(num);
        if (check)
        {
            cout << "Power of given no. is " << check << endl;
        }
        else
        {
            cout << "Given no. is not power of two" << endl;
        }
    }
    return 0;
}
