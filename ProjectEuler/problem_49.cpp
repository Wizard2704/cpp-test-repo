#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool Permutation_difference(int num1, int num2, int num3) {
    string num_str1 = to_string(num1);
    string num_str2 = to_string(num2);
    string num_str3 = to_string(num3);

    sort(num_str1.begin(), num_str1.end());
    sort(num_str2.begin(), num_str2.end());
    sort(num_str3.begin(), num_str3.end());

    if (num_str1 == num_str2 && num_str2 == num_str3) {
        if(num1 - num2 == num2 - num3)
            return true;
    }  
        return false;
}

bool Simple_num(int num) {
    int number = 2;
    while (num != 1) {
        if (num % number == 0)
            return false;
        else
            ++number;
        if (number > sqrt(num))
            return true;
    }
    return true;
}

int main() {
    vector<int>simple_num;
    int count = 1000;
    while (count < 10000) {
        if (Simple_num(count))
            simple_num.push_back(count);
        ++count;
    }
    for (int i = 0; i < simple_num.size() - 2; ++i) {
        for (int j = i + 1; j < simple_num.size() - 1; ++j) {
            for (int k = j + 1; k < simple_num.size(); ++k) {
                if (Permutation_difference(simple_num[i], simple_num[j], simple_num[k]))
                    cout << simple_num[i] << simple_num[j] << simple_num[k];
            }
        }
    }
}