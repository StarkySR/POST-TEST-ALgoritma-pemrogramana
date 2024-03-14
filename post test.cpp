#include <iostream>
using namespace std;

int main(){
	int quantity,harga,jumlahharga,totalharga,diskon;
	harga=10000;
	cout<<"masukkan Quantity :";
	cin>>quantity;
	if(quantity >100){
		diskon=20/100;
		jumlahharga=quantity*harga;
		totalharga=jumlahharga*20/100;
		cout<<"Total Harga setelah diskon :"<<totalharga<<endl;
		cout<<"Diskon 20%"<<endl;
	}
	else if(quantity >70){
		jumlahharga=quantity*harga;
		totalharga=jumlahharga*15/100;
		cout<<"Total Harga setelah diskon :"<<totalharga<<endl;
		cout<<"Diskon 15%"<<endl;
	}
	else if(quantity >50){
		diskon=0.1;
		jumlahharga=quantity*harga;
		totalharga=jumlahharga*diskon;
		cout<<"Total Harga setelah diskon :"<<totalharga<<endl;
		cout<<"Diskon :"<<diskon<<endl;
	}
	else{
		diskon=0;
		jumlahharga=quantity*harga;
		totalharga=jumlahharga;
		cout<<"Total Harga setelah diskon :"<<totalharga<<endl;
		cout<<"Diskon :"<<diskon<<endl;	
	}
}
