#include<iostream>
#include<math.h>
#include<iomanip>

const float pi = 3.14;
using namespace std;

int main (){
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	float S = pi * r * r;
	cout << "Dien tich cua hinh tron ban kinh r: " <<setprecision(2) << fixed << S << endl;
	return 0;
}
