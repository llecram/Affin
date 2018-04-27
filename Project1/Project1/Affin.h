#pragma once
#include<iostream>
#include<string>
#include<math.h>
string alfabeto = "abcdefghijklmnopqrstuvwxyz ";
using namespace std;
class Affin{
private:
	int a;
	int b;
public:
	Affin();
	Affin(int a, int b);
	string cifrado(string)const;
	string descifrado(string)const;

};

