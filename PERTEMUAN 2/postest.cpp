#include<iostream>
using namespace std;
int main(){
	int tahun;
	cout<<"Masukkan Tahun : ";
	cin>>tahun;
	if(tahun%4==0){
		cout<<"Tahun "<<tahun<<" merupakan Tahun Kabisat";
	}
	else{
		cout<<"Tahun "<<tahun<<" bukan merupakan Tahun Kabisat";
	}
}
