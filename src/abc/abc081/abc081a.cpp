#include <iostream>
using namespace std;

int main()
{
    string str;

    // handle inputs
    cin >> str;

    int count = 0;
    for (uint i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}