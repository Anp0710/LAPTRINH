#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll pow1(int a, int b){
	ll res = 1;
	while(b != 0){
		if(b % 2 == 1){
			res *= a;
		}
		b /= 2;
		a *= 2;
	}
	return res;
}
ll pow2(int a, int b){
	if(b = 0) return 1;
	ll x = pow2(a, b/2);
	if(b % 2 == 1){
		return x*x*a;
	}
	else return x * x * a; 
}
int main(){
	int a,b;
	cin >> a >> b;
	cout << pow1(a,b) << endl;
	cout << pow2(a,b);
}

