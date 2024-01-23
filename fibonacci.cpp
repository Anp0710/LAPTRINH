#include<bits/stdc++.h>

using namespace std;
void solve (int n){
	cout << "0 1 ";
	long long fn2 = 0, fn1 = 1;
	for(int i = 3; i <= n;i++){
		long long fn = fn1 + fn2;
		cout << fn << " ";
		fn2 = fn1;
		fn1  = fn;
	}
}

void solve(int n){
	long long fibo(n);
	fibo(0) = 0;
	fibo(1) = 1;
	for(int i = 0 ;i < n;i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for(int i = 0;i < n;i++){
		cout << fibo[i];
	}
}
int main(){
	int n;
	cin >> n;	
	solve(n);
}
