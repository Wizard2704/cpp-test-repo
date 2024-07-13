#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    set<int>digit;
    set<int>result;
    int num1 = 0;
    int num2 = 0;
    int multi = 0;
    int count = 0;
    int copy = 0;
    int sum = 0;

    for (int i = 1; i < 1000; ++i) {
        for (int j = 1; j < 2000; ++j) {
            num1 = i;
            num2 = j;
            multi = i * j;
            copy = multi;
            while (num1 != 0) {
                int rem = num1 % 10;
                if (rem == 0)
                    break;
                digit.insert(rem);
                ++count;
                num1 /= 10;
            }
            while (num2 != 0) {
                int rem = num2 % 10;
                if (rem == 0)
                    break;
                digit.insert(rem);
                ++count;
                num2 /= 10;
            }
            while (copy != 0) {
                int rem = copy % 10;
                if (rem == 0)
                    break;
                digit.insert(rem);
                ++count;
                if (count > 9)
                    break;
                copy /= 10;
            }
            if (digit.size() == 9 && count == 9) {
                string size1 = to_string(i);
                string size2 = to_string(j);
                string size3 = to_string(multi);
                if (size1.size() + size2.size() + size3.size() == 9)
                    result.insert(multi);
            }
            digit.clear();
            count = 0;
        }
    }
    for (int num : result)
        sum += num;
    cout << sum;
}