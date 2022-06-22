#include<iostream>
#include<conio.h>
using namespace std;
void contohMatrix(){
	cout<<"+===============MATRIX BUBBLE SORT===============+"<<endl;
	cout<<"\t\ta\tb\tc"<<endl;
	cout<<"\t\td\te\tf"<<endl;
	cout<<"\t\tg\th\ti"<<endl;
	cout<<"+===============MATRIX BUBBLE SORT===============+"<<endl;
}
int main(){
	int array[99][99], menu;
	pil:
	contohMatrix();
	cout<<"Menu : "<<endl;
	cout<<"1. Input Data"<<endl;
	cout<<"2. Lihat Data"<<endl;
	cout<<"3. Sorting Data"<<endl;
	cout<<"4. Keluar"<<endl;
	cout<<"Masukkan Menu : ";
	cin>>menu;
	if(menu==1){
		system("cls");
		contohMatrix();
		for(int i=1; i<=3; i++){
			for (int j=1; j<=3; j++){
				cout<<"Masukkan Data Baris "<<i<<" kolom "<<j<<" : ";
				cin>>array[i][j];
			}
		}
		cout<<"Press any key to continue...";
		getch();
		system("cls");
		goto pil;
	}
	if(menu==2){
		system("cls");
		contohMatrix();
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
}
