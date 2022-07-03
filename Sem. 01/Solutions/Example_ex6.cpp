#include <iostream>
using namespace std;

int main(){
	int a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	if (a > b) {
		cout << "the max element is equal to " << a;
	}
	else if (a < b) {
		cout << "the max element is equal to " << b;
	}
	else cout << "the elements are equal";
}