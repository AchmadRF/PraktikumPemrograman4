#include<iostream>
#include "Segitiga.h"
using namespace std;

Segitiga::Segitiga(int alas, int tinggi, int sisi){
	this-> alas = alas;
	this-> tinggi = tinggi;
	this-> sisi = sisi;
}
double Segitiga::luas(){
	return alas*tinggi/2;
}
double Segitiga::keliling(){
	return sisi+sisi+sisi;
}
void Segitiga::display(){
	cout <<alas<<endl;
	cout <<tinggi<<endl;
	cout <<sisi<<endl;
}
