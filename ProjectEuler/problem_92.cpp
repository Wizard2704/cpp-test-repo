#include <iostream>

using namespace std;

int squared_sum(int num) {
    int new_num = 0;
    int digit = 0;
    while (num != 0) {
        digit = num % 10;
        num /= 10;
        new_num += digit * digit;
    }
    return new_num;
}

int main() {
    int count = 0;
    for (int i = 1; i < 10000000; ++i) {
        int num = i;
        while (num != 1 && num != 89) {
            num = squared_sum(num);
        }
        if (num == 89)
            ++count;
    }
    cout << count;
}