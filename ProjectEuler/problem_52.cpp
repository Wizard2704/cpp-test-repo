#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool Double_check(int num1, int num2, int num3, int num4, int num5) {
    string num_str_1 = to_string(num1);
    sort(num_str_1.begin(), num_str_1.end());
    string num_str_2 = to_string(num2);
    sort(num_str_2.begin(), num_str_2.end());
    string num_str_3 = to_string(num3);
    sort(num_str_3.begin(), num_str_3.end());
    string num_str_4 = to_string(num4);
    sort(num_str_4.begin(), num_str_4.end());
    string num_str_5 = to_string(num5);
    sort(num_str_5.begin(), num_str_5.end());
    if (num_str_1 == num_str_2 && num_str_2 == num_str_3
        && num_str_3 == num_str_4 && num_str_4 == num_str_5)
        return true;
    else
        return false;
}

int main() {
    int num = 1;
    while (true) {
        int x2 = num * 2;
        int x3 = num * 3;
        int x4 = num * 4;
        int x5 = num * 5;
        int x6 = num * 6;
        if (Double_check(x2, x3, x4, x5, x6)) {
            cout << num << endl;
            break;
        }
        ++num;
    }
}