#include <iostream>
#include <vector>

using namespace std;

int static gcd(int x, int y){
    return y ? gcd(y, x % y) : x;
}

int main() {
    vector<int> nums;
    for (int i = 2; i < 1000; ++i) {
        if (gcd(i, 10) == 1)
            nums.push_back(i);
    }

    int max = 0;
    for (int i = 0; i < nums.size(); ++i) {
        int count = 0;
        int number = 1;
        while (true) {
            number = number * 10;
            if (number % nums[i] == 1) {
                if (count > max) {
                max = nums[i];
                }
                break;
            }
            else {
                number = number % nums[i];
                ++count;
            }
        }
    }
    cout << max;
}
