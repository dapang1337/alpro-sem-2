#include<iostream>
using namespace std;
int main(){
	int array[3][3];
	cout<<"+===============MATRIX BUBBLE SORT===============+"<<endl;
	cout<<"\t\ta\tb\tc"<<endl;
	cout<<"\t\td\te\tf"<<endl;
	cout<<"\t\tg\th\ti"<<endl;
	cout<<"+===============MATRIX BUBBLE SORT===============+"<<endl;
	for(int i=1; i<=3; i++){
		for (int j=1; j<=3; j++){
			cout<<"Masukkan Data Baris "<<i<<" kolom "<<j<<" : ";
			cin>>array[i][j];
		}
	}
//	system("cls");
	for(int i=1; i<=3; i++){
		for (int j=1; j<=3; j++){
			if(j==3){
				cout<<array[i][j]<<"\t";
				cout<<endl;
			}
			else{
				cout<<array[i][j]<<"\t";
			}
		}
	}
}
