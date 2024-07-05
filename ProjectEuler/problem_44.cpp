#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
	set<int>num_set;
	vector<int>num_vec;
	int pentoganal = 0;

	for (int i = 1; pentoganal < 10000000; ++i) {
		pentoganal = i * (3 * i - 1) / 2;
		num_set.insert(pentoganal);
		num_vec.push_back(pentoganal);
	}
	for (int i = 0; i < num_vec.size() - 1; ++i) {
		for (int j = 1 + i; j < num_vec.size(); ++j) {
			if (num_set.count(num_vec[i] + num_vec[j]) && (num_set.count(num_vec[j] - num_vec[i])))
				cout << num_vec[j] - num_vec[i] << endl;
		}
	}
	
	 return 0;
}