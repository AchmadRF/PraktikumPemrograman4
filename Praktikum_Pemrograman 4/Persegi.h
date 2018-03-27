#include<iostream>
#include "BangunDatar.h"
using namespace std;

class Persegi:protected BangunDatar{
	protected:
		int sisi;
	public:
		Persegi(int sisi){
			this->sisi = sisi;
		}
		double luas(){
			return sisi*sisi;
		}
		double keliling(){
			return sisi+sisi+sisi+sisi;
		}
		void display(){
			cout<<sisi<<endl;
		}
};
