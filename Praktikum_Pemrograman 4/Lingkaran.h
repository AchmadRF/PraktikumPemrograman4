#include<iostream>
#include "BangunDatar.h"
using namespace std;

class Lingkaran:protected BangunDatar{
	protected:
		float phi;
		int rad;
	public:
		Lingkaran(float phi, int rad){
			this->phi = phi;
			this->rad = rad;
		}
		double luas(){
			return phi*rad*rad;
		}
		double keliling(){
			return 2*phi*rad;
		}
		void display(){
			cout<<rad<<endl;
			cout<<phi<<endl;
		}
};

