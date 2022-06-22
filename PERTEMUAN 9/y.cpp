#include<iostream>
using namespace std;
int main(){
	int n; 
	int brs, klm;
	int data[20];
	int output[40][40];
	int d=0;
	
	cout<<"Masukkan banyaknya bilangan : ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Data ke-"<<i<<" : ";
		cin>>data[i];
	}
	for(int j=0; j<n; j++){
		cout<<data[j];
	}
	cout<<endl<<endl;
	cout<<"Masukkan banyaknya kolom : ";
	cin>>klm;
	cout<<"Masukkan banyaknya baris : ";
	cin>>brs;
	
	for(int k=0; k<brs; k++){
		for(int l=0; l<klm; l++){
			output[k][l]=data[d];
			d++;
		}
	}
	for(int k=0; k<brs; k++){
		for(int l=0; l<klm; l++){
			cout<<output[k][l]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
