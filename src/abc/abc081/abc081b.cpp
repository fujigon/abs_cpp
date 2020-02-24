#include <iostream>
using namespace std;

int main()
{
    int n;

    // handle inputs
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int all_or = 0x0;

    for (int i = 0; i < n; i++)
    {
        all_or = all_or | array[i];
    }
    int count = 0;
    while (all_or % 2 == 0)
    {
        count++;
        all_or = all_or >> 1;
    }

    cout << count << endl;

    return 0;
}