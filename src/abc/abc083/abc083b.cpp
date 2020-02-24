#include <iostream>
#include <algorithm>
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

    // sort
    sort(array, array + n, greater<int>());

    int alice = 0;
    int bob = 0;
    for (int i = 0; i < n/2; i++)
    {
        alice += array[2 * i];
        bob += array[2 * i + 1];
    }
    if (n % 2 == 1) {
        alice += array[n-1];
    }
    cout << alice - bob << endl;
    return 0;
}