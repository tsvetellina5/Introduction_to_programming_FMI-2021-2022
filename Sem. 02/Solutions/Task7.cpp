#include <iostream>
using namespace std;

int main() {
	int r, x, y;
	cin >> r >> x >> y;
	int dist = sqrt(x * x + y * y);
	if (r == dist) cout << "on the circle";
	else if (r < dist) cout << "out the circle";
	else if (r > dist) cout << "in the circle";
	return 0;
}