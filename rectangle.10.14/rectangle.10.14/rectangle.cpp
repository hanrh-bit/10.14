#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int s = a * b;
	int c = a * 2 + b * 2;
	cout << "长方形的面积为" << s << endl;
	cout << "长方形周长为" << c << endl;
	return 0;
}