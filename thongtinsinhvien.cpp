#include<bits/stdc++.h>

using namespace std;
struct Thongtin{
	int code;
	string name;
	int mark;
}Sinhvien;
void nhap(Thongtin Sinhvien[],int n){
	for(int i = 0;i < n;i++){
		cout << "Code: ";
		cin >> Sinhvien[i].code ;
		cout << "Name: ";
		cin >> Sinhvien[i].name; 
		cin.ignore();
		cout << "Mark: ";
		cin >> Sinhvien[i].mark;
		cout << "------------------------" << endl;
	}
}
void in(Thongtin Sinhvien[],int n){
	cout << "Cac sinh vien da nhap" << endl;
	cout << "Id\tName" << endl;
	for(int i = 0;i < n;i++){
		cout << i + 1 << "\t" << Sinhvien[i].name << endl;
	}
}
void hienthi(Thongtin Sinhvien[],int n,int num){
	cout << "Cac sinh vien co id lon hon " << num << " la: " << endl;
	for(int i = 0; i < n;i++){
		if(Sinhvien[i].code > num){
			cout << Sinhvien[i].name << endl;
		}
	}
}
int main(){
	int n;
	cin >> n;
	Thongtin Sinhvien[n];
	nhap(Sinhvien,n);
	in(Sinhvien,n);
	int num;
	cin >> num;
	hienthi(Sinhvien,n,num);
}
