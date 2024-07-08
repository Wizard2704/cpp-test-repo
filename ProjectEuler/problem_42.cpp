#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
	string path = "C:/Users/Horso/OneDrive/Рабочий стол/names.txt";
	ifstream fin;
	vector<string>names;
	set<int>trian_num;
	string name;
	int triangular = 0;
	int count = 0;
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
	for (int i = 1; triangular < 1000; ++i) {
		triangular = i * (i + 1) / 2;
		trian_num.insert(triangular);
	}
	for (int i = 0; i < names.size(); ++i) {
		long sum_name = 0;
		for (int j = 0; j < names[i].size(); ++j) {
			sum_name += names[i][j] - 64;
		}
		if (trian_num.count(sum_name))
			++count;
	}
	cout << count;

	fin.close();
}