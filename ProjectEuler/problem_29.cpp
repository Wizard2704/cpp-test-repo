#include<iostream>
#include<vector>
#include<set>

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

vector<int>summe(vector<int> vec1, vector<int> vec2) {
	int rem = 0;
	for (int i = vec2.size() - 1; i >= 0; --i) {
		int copy = vec2[i];
		vec2[i] = (vec1[i] + vec2[i] + rem) % 10;
		rem = (vec1[i] + copy + rem) / 10;
	}
	return vec2;
}

int main()
{
	vector<int>factor1(200, 0);
	vector<int>factor2(200, 0);
	set<vector<int>>result;

	for (int i = 2; i <= 100; i++) {
		for (int j = 2; j <= 100; j++) {
			factor2 = multiplication(translation_into_vector(factor1, i), i, j);
			result.insert(factor2);
			vector<int>factor2(200, 0);
		}
	}
	cout << result.size() << endl;
}