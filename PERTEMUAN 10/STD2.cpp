#include<iostream>
using namespace std;
class node{
	public:
		int nim;
		string nama;
		node *anjaz;
};
int main(){
	int i = 1;
	node *name;
	name = new node;
	node *run;
	run = new node;
	while(run != NULL){
		cout<<"Masukkan Nama Mahasiswa ke-"<<i<<" : ";
		cin>>name->nama;
		i++;
		name = name->anjaz;
	}
//	name->anjaz = NULL;
	
	node *niem;
	niem = new node;
	cout<<endl<<endl;
//	for(int i=1; i<=5; i++){
//		cout<<"Masukkan NIM Mahasiswa Ke-"<<i<<" : ";
//		cin>>niem->nim;
//	}
	niem->anjaz = NULL;
	cout<<endl<<endl;
	
	
	while(run != NULL){
		cout<<"Nama Mahasiswa ke-"<<i<<" : "<<name->nama;
		i++;
		run = run -> anjaz;
	}
}
