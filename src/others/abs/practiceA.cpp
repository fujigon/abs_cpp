#include <iostream>
using namespace std;

void solve(std::istream& ist, std::ostream& ost) {
    int a, b, c;
    string s;

    // handle inputs
    ist >> a;

    ist >> b >> c;

    ist >> s;

    int sum = a + b + c;
    ost << sum << " " << s << std::endl;
}

#ifndef DEBUG
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
