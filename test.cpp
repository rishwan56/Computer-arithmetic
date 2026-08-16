#include<iostream>
#include "arithmetic.h"
using namespace std;

int main(){
	int a;
	int b;
	cout << "multiplicand : ";
	cin >> a;
	cout << "multiplier : ";
	cin >> b ;
	long long product = multiply(a, b);
	cout << product << endl;
	return 0;
}
