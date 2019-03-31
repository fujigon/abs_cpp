#include <iostream>
#include <string>
using namespace std;

bool ends_with(const std::string &s, const std::string &suffix)
{
    if (s.size() < suffix.size())
        return false;
    return std::equal(std::rbegin(suffix), std::rend(suffix), std::rbegin(s));
}
int main()
{
    string str;

    // handle inputs
    cin >> str;

    while (true)
    {
        if (ends_with(str, "dream"))
        {
            str = str.substr(0, str.rfind("dream"));
        }
        else if (ends_with(str, "dreamer"))
        {
            str = str.substr(0, str.rfind("dreamer"));
        }
        else if (ends_with(str, "erase"))
        {
            str = str.substr(0, str.rfind("erase"));
        }
        else if (ends_with(str, "erase"))
        {
            str = str.substr(0, str.rfind("erase"));
        }
        else if (ends_with(str, "eraser"))
        {
            str = str.substr(0, str.rfind("eraser"));
        }
        else
        {
            break;
        }
    }
    if (str.size() == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
