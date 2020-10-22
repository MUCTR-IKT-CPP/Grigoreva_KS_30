#include <iostream>
#include "ctime"
using namespace std;

int q(int& result, int& n, int &c) {
	srand(time(NULL)+c);
	while (result < n) {
		result += rand() % 11;
	}
	cout << result << endl;
	return result;
}
int main()
{
	int result = 0; int c = 0;
	int n, m;
	cin >> n >> m;
	q(result, n,c);
	while (result % m != 0&&c<10) {
		result = 0;
		q(result, n,c);
		c++;
	}
	cout << c;

}