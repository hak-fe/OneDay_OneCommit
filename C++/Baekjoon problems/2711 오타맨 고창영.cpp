#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int testcase;
	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		int ota;
		string str;
		cin >> ota >> str;
		cout << str.replace(ota - 1, 1, "") << '\n';
	}

}