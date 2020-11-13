#include <iostream>

using namespace std;

const int aLen = 5; //тут можно поменять количество денег

struct  Denga
{
	string name;   //название
	double value;	//номинал
	double inRub;	// цена в рублях
};

void func(double &result) {
	Denga denga[aLen] = {};
	for (int j = 0; j != aLen; j++) {
		cin >> denga[j].name;
		denga[j].value=1;
		cin >> denga[j].inRub;
	}
	for (int j = 0; j != aLen; j++) {
		result += denga[j].value * denga[j].inRub;
	}
}

int main()
{
	double result = 0;
	func(result);
	cout << result;
}