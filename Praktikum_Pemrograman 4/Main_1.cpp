#include<iostream>
#include "Segitiga.h"
#include "Persegi.h"
#include "Lingkaran.h"
using namespace std;

int main(){
	Segitiga sgt(4,5,6);
	sgt.display();
	cout <<"Total : "<<sgt.luas()<<endl;
	cout <<"Total : "<<sgt.keliling()<<endl;
	
	Persegi psg(4);
	psg.display();
	cout <<"Total : "<<psg.luas()<<endl;
	cout <<"Total : "<<psg.keliling()<<endl;
	
	Lingkaran bndr(3.14, 7);
	bndr.display();
	cout <<"Total : "<<bndr.luas()<<endl;
	cout <<"Total : "<<bndr.keliling()<<endl;
	
	return 0;
}
