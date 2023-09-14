#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main (){
	float a, b, c;
	cout << "Nhap do dai cac canh lan luot: ";
	cin >> a >> b >> c;
	float p = (a + b + c) / 2;
	float S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Dien tich tam giac: " << setprecision(2) << fixed << S << endl;
	return 0;
}
