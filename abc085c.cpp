#include <iostream>
using namespace std;

int main()
{
    int n, y;

    // handle inputs
    cin >> n >> y;

    // a : 10000, b : 5000, c : 1000
    int amax = y / 10000;
    for (int a = 0; a <= amax; a++)
    {
        int bmax = (y - a * 10000) / 5000;
        for (int b = 0; b <= bmax; b++)
        {
            int c = n - a - b;
            if (c < 0)
            {
                break;
            }
            if (a * 10000 + b * 5000 + c * 1000 == y)
            {
                cout << a << " " << b << " " << c << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}