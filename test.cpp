#include<iostream>
#include "arithmetic.h"
using namespace std;

int main(){
	int a;
	int b;
	cout << "multiplicand : ";
	cin >> a;
       	cout << endl;
	cout << "multiplier : ";
	cin >> b ;
	cout << endl;
	long long product = multiply(a, b);
	cout << product;
	return 0;
}
