#pragma once
#include<iostream>
using namespace std;


class Lanchas
{

private:
	string name;
	double velo, distRec;
	int nitro;

public:

	//CONSTRUCTOR
	Lanchas(string pName,double pVelo, double pDistRec, int pNitro);



	//GETTERS
	string getName();
	double getVelo();
	double getDistRec();
	int getNitro();



	//SETTERS 
	void setName(string pName);
	void setVelo(double pVelo);
	void setDistRec(double pDistRec);
	void setNitro(int pNitro);

	//METODOS PROPIOS

	//VELOCIDAD
	void calVel(int pDado);

	//DISTANCIA
	void calcDist();


};

