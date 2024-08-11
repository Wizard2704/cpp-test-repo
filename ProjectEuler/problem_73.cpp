#include <iostream>
#include <algorithm>

using namespace std;

int static gcd(int x, int y)
{
    return y ? gcd(y, x % y) : x;
}

int main() {
    int count = 0;
    double fraction = 0;
    for (int i = 1; i <= 12000; ++i) {
        for (int j = 1; j <= 12000; ++j) {
            if (gcd(i, j) == 1) {
                fraction = (i * 1.0) / (j * 1.0);
                if (fraction > 1.0 / 3 && fraction < 1.0 / 2)
                    ++count;
           }
        }
    }
    cout << count;
}
