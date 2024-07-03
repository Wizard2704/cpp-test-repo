#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string path = "C:/Users/.../.../... /names.txt";
	ifstream fin;
	vector<string>names;
	string name;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Error";
	}
	else {
		char ch;
		while (fin.get(ch)) {
			if (ch == '"')
				continue;
			if (ch == ',') {
				names.push_back(name);
				name = "";
				continue;
			}
			name += ch;
		}
	}
	names.push_back(name);
	sort(names.begin(), names.end());

	long long result = 0;
	for (int i = 0; i < names.size(); ++i) {
		long sum = 0;
		for (int j = 0; j < names[i].size(); ++j) {
			sum += names[i][j] - 64;
		}
		sum *= i + 1;
		result += sum;
	}
	cout << result;

	fin.close();
}