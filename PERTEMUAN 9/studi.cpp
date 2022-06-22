#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int buku[30];
	int rak, bk, pass, temp, menu;
	int data[25];
	int output[40][40];
	int d=0;
	pil:
	cout<<"Menu : "<<endl;
	cout<<"1. Input Data"<<endl;
	cout<<"2. Lihat Data"<<endl;
	cout<<"3. Sorting Data"<<endl;
	cout<<"4. Convert 1D Matrix to 2D Matrix"<<endl;
	cout<<"5. Exit Program"<<endl;
	cout<<"Masukkan Menu : ";
	cin>>menu;
	if(menu==1){
		for(int i=0;i<24; i++){
		cout<<"Masukkan Data Buku ke-"<<i<<" : ";
		cin>>data[i];
		}
		getch();
		system("cls");
		goto pil;
	}
	else if(menu==2){
	 	for(int i=0; i<24; i++){
			cout<<data[i]<<" ";
		}
		getch();
		system("cls");
		goto pil;
	}
	else if(menu==3){
		for(int i = 0; i<24; i++) {
   			for(int j = i+1; j<24; j++){
      			if(data[j] < data[i]) {
         			temp = data[i];
         			data[i] = data[j];
         			data[j] = temp;
      			}
  			}
		pass++;
		}
		cout<<"Sorting Done...";
		getch();
		system("cls");
		goto pil;
	}
	else if(menu==4){
		cout<<"Masukkan banyaknya rak : ";
		cin>>rak;
		cout<<"Masukkan banyaknya buku dalam 1 rak : ";
		cin>>bk;
		
		for(int k=0; k<rak; k++){
			for(int l=0; l<bk; l++){
				output[k][l]=data[d];
				d++;
			}
		}
		for(int k=0; k<rak; k++){
			for(int l=0; l<bk; l++){
				cout<<output[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<"DONE";
		getch();
		system("cls");
		goto pil;
	}
	else if(menu==5){
		cout<<"PROGRAM SELESAI...";
	}
	else{
		cout<<"Menu not available!!!";
	}
	return 0;
}
