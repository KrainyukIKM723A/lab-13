#include <iostream> 
using namespace std;
double computeSeries(int n) {
	if (n == 1)
		return 20.0;
	else
		return computeSeries(n - 1) / 2.0;
}

int main() {
	int n;
	cout << "Input n: ";
	cin >> n;

	if (n < 0) {
		cout << "N must be bigger than 0" << endl;
		return 1;
	}

	double result = computeSeries(n);
	cout << "Result: " << result << endl;

	return 0;
}
