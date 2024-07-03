#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	cout << sizeof(int16_t) << endl;
	return 0;
}

/*
	int num = 1;
	string Champ;
	while (num < 1000000) {
		Champ += to_string(num);
		++num;
	}
	string res = { Champ[0], Champ[9] , Champ[99] , Champ[999] , Champ[9999] ,
		Champ[99999] , Champ[999999] };
	int multi = 1;
	for (int i = 0; i < res.size(); ++i) {
		multi *= res[i] - '0';
	}
	cout << multi;
*/