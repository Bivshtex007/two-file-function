#include <iostream>
#include <cmath>
using namespace std;

int addition(int a);

int main () {

	int a;
	cout << "Enter The Number..." << endl;
	cin >> a;
	cout << "Number + Number will be..." << endl << addition(a) << endl;
	return 0;

}