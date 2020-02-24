#include <iostream>
using namespace std;

int main()
{
    int a, b, c, x;

    // handle inputs
    cin >> a >> b >> c >> x;

    int count = 0;
    for (int ai = 0; ai <= a; ai ++) {
        int asum = ai * 500;
        if (asum > x) {
            break;
        }
        for (int bi = 0; bi <= b; bi++) {
            int bsum = bi * 100;
            if (asum + bsum > x) {
                break;
            }
            for (int ci = 0; ci <= c; ci++) {
                int csum = ci * 50;
                int sum = asum + bsum + csum;
                if (sum == x) {
                    count++;
                } else if (sum > x) {
                    break;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}