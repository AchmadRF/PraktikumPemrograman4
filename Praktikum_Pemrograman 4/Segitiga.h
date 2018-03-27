#include<iostream>
#include "BangunDatar.h"
using namespace std;

class Segitiga:protected BangunDatar{
	protected:
		int alas;
		int tinggi;
		int sisi;
	public:
		Segitiga(int alas, int tinggi, int sisi){
			this->alas = alas;
			this->tinggi = tinggi;
		}
		double luas(){
			return alas*tinggi/2;
		}
		double keliling(){
			return sisi+sisi+sisi;
		}
		void display(){
			cout<<alas<<endl;
			cout<<tinggi<<endl;
			cout<<sisi<<endl;
		}
};
