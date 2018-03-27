#include "Persegi.h"
#include <iostream>
using namespace std;

Persegi::Persegi(int sisi){
	this->sisi = sisi;
}
double Persegi::luas(){
	return sisi*sisi;
}
double Persegi::keliling(){
	return sisi+sisi+sisi+sisi;
}
void Persegi::display(){
	cout <<sisi<<endl;
}
