#include<iostream>
#include<vector>

using namespace std;

vector<int>translation_into_vector(vector<int>& vec1, int n) {
	for (int i = vec1.size() - 1; i >= 0; --i) {
		vec1[i] = n % 10;
		n /= 10;
		if (n == 0)
			return vec1;
	}
}

vector<int>multiplication(vector<int>& vec1, int n) {
	int rem = 0;
	int count = n - 1;
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

vector<int>summe(vector<int> vec1, vector<int>& vec2) {
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
	vector<int>addend(5000, 0);
	int num = 1;

	while (num <= 999) {
		vector<int>factor1(5000, 0);
		translation_into_vector(factor1, num);
		multiplication(factor1, num);
		summe(factor1, addend);
		++num;
	}

	for (int i = addend.size() - 10; i < addend.size(); ++i) {
		cout << addend[i];
	}
}