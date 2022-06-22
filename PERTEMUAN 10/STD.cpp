#include<iostream>
using namespace std;
class node{
	public:
		int nim;
		string nama;
		node *anjaz;
};
int main(){
	node *name;
	name = new node;
	for(int i=1; i<=5; i++){
		cout<<"Masukkan Nama Mahasiswa Ke-"<<i<<" : ";
		cin>>name->nama;
	name->anjaz = NULL;
	}
	
	node *niem;
	niem = new node;
	cout<<endl<<endl;
//	for(int i=1; i<=5; i++){
//		cout<<"Masukkan NIM Mahasiswa Ke-"<<i<<" : ";
//		cin>>niem->nim;
//	}
	niem->anjaz = NULL;
	cout<<endl<<endl;
	
	node *nameRun = name;
	node *run = nameRun;
	int i = 1;
	
	while(run != NULL){
		cout<<"Nama Mahasiswa ke-"<<i<<" : "<<name->nama;
		i++;
		run = run -> anjaz;
	}
}
