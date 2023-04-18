#include "Lanchas.h"
using namespace std;

// Constructor
Lanchas::Lanchas(string pName, double pVelo, double pDistRec, int pNitro) {
	name = pName;
	velo = pVelo;
	distRec = pDistRec;
	nitro = pNitro;
	
}

// getters

string Lanchas::getName() {
	return name;
}

double Lanchas::getDistRec() {
	return distRec;
}

double Lanchas::getVelo() {
	return velo;
}

int Lanchas::getNitro() {
	return nitro;
}


//setters

void Lanchas::setName(string pName) {
	name = pName;
}

void Lanchas::setVelo(double pVelo) {
	velo = pVelo;
}

void Lanchas::setDistRec(double pdistRec) {
	distRec = pdistRec;
}
void Lanchas::setNitro(int pNitro) {
	nitro = pNitro;
}


//METODOS PROPIOS

//CALCULE LA VELOCIDAD TOTAL
void Lanchas::calVel(int pDado) {
	velo = velo + pDado;
}



//CALCULE LA DISTANCIA TOTAL
void Lanchas::calcDist() {
	distRec = distRec + velo * 100;
}