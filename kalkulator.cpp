#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){
	
	int bil1, bil2, pil;
	float hasil;
	string operasi;
	
	cout<<"Pilih Operator yang di inginkan"<<endl;
	cout<<"1. penjumlahan"<<endl;
	cout<<"2. pengurangan"<<endl;
	cout<<"3. perkalian"<<endl;
	cout<<"4. pembagian"<<endl;
	
	cout<<"masukan pilihan : ";cin>>pil;
	cout<<"masukan bilangan pertama : ";cin>>bil1;
	cout<<"masukan biangan ke dua : ";cin>>bil2;
	
	switch(pil){
		case 1 : hasil=bil1+bil2;
		operasi = '+';
		break;
		case 2 : hasil=bil1-bil2;
		operasi = '-';
		break;
		case 3 : hasil=bil1*bil2;
		operasi = '*';
		break;
		case 4 : hasil=bil1/bil2;
		operasi = '/';
		break;
	}
	cout<<"\n";
	cout<<"==============================================="<<endl;
	cout<<"   "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	cout<<"==============================================="<<endl;
	getch();
}
