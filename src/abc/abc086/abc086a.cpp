#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // handle inputs
    cin >> a >> b;

    if (a % 2 == 0 || b % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    return 0;
}