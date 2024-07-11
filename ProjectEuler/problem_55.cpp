#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

unsigned long long Make_Palindrome(unsigned long long num) {
    string num_str = to_string(num);
    reverse(num_str.begin(), num_str.end());
    long long reverse = stoll(num_str);
    return reverse;
}

bool Palindrome_check(unsigned long long num) {
    string num_str = to_string(num);
    reverse(num_str.begin(), num_str.end());
    if (to_string(num) == num_str)
        return true;
    else
        return false;
}

int main() {
    unsigned long long number1 = 0;
    int numb_iter = 0;
    unsigned long long sum = 0;
    int result = 0;
    for (int i = 196; i < 10000; i++) {
        number1 = Make_Palindrome(i);
        sum = number1 + i;
        while (true) {
            if (Palindrome_check(sum))
                break;
            else
                sum = sum + Make_Palindrome(sum);
            if (numb_iter > 28) {
                ++result;
                break;
            }
            ++numb_iter;
        }
        numb_iter = 0;
    }
    cout << result;
}