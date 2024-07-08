#include<iostream>
#include<vector>

using namespace std;

vector<int>translation_into_vector(vector<int> vec1, int n) {
    for (int i = vec1.size() - 1; i >= 0; --i) {
        vec1[i] = n % 10;
        n /= 10;
        if (n == 0)
            return vec1;
    }
}

vector<int>multiplication(vector<int> vec1, int n, int deg) {
    int rem = 0;
    int count = deg - 1;
    while (count) {
        for (int i = vec1.size() - 1; i >= 0; --i) {
            int copy = vec1[i];
            vec1[i] = (n * vec1[i] + rem) % 10;
            rem = (n * copy + rem) / 10;
        }
        --count;
    }
    return vec1;
}

int main()
{
    vector<int>factor1(200, 0);
    vector<int>factor2(200, 0);
    int sum = 0;
    int max = 0;

    for (int i = 2; i < 100; i++) {
        for (int j = 2; j < 100; j++) {
            factor2 = multiplication(translation_into_vector(factor1, i), i, j);
            for (int k = 0; k < factor2.size(); ++k) {
                sum += factor2[k];
            }
            if (sum > max)
                max = sum;
            vector<int>factor2(200, 0);
            sum = 0;
        }
    }
    cout << max << endl;
}