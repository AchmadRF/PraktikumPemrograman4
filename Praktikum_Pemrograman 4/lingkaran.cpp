#include<iostream>
#include "lingkaran.h"
using namespace std;

Lingkaran::Lingkaran(float phi, int rad){
	this->phi = phi;
	this->rad = rad;
}
double Lingkaran:: luas(){
	return phi*rad*rad;
}
double Lingkaran::keliling(){
	return 2*phi*rad;
}
void Lingkaran::display(){
	cout <<phi<<endl;
	cout <<rad<<endl;
}
