
#include "lanchas.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

#include <chrono>
#include <thread>
#include<windows.h>

using namespace std;
bool usoNitro = false;
Lanchas lancha1("PezMarino", 0, 0, 1);
Lanchas lancha2("AquaWoman", 0, 0, 1);
Lanchas lancha3("PepeStone", 0, 0, 1);

int numAle() {    
    int aleatorio = (std::rand() % 6) + 1;
    return aleatorio;
}
void inicio() {
    
    cout << "Estas son las tres lanchas y sus atributos: " << endl;
    cout << "\033[1;32m";
    cout << "La primera lancha es " << lancha1.getName() << " esta lancha tiene de momento " << lancha1.getVelo() << " velocidad con " << lancha1.getDistRec() << " de distancia recorrida ,tiene " << lancha1.getNitro() << " de nitro " << endl;
    std::cout << "\033[0m";
    Sleep(1000);
    cout << "\033[34m";
    cout << "La segunda lancha es " << lancha2.getName() << " esta lancha tiene de momento " << lancha2.getVelo() << " velocidad con " << lancha2.getDistRec() << " de distancia recorrida ,tiene " << lancha2.getNitro() << " de nitro " << endl;
    std::cout << "\033[0m";
    Sleep(1000);
    cout << "\033[31m";
    cout << "La tercera lancha es " << lancha3.getName() << " esta lancha tiene de momento " << lancha3.getVelo() << " velocidad con " << lancha3.getDistRec() << " de distancia recorrida ,tiene " << lancha3.getNitro() << " de nitro " << endl;
    std::cout << "\033[0m";
    Sleep(1000);
    cout << "Empieza la carrera de lanchas!! " << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
}

void marcador() {
    cout << "\033[1;32m";
    cout << "                             " << lancha1.getName() << " ----- Velocidad: " << lancha1.getVelo() << " Distancia: " << lancha1.getDistRec() << "    Nitro: " << lancha1.getNitro() << endl;
    cout << "\033[34m";
    cout << "                             " << lancha2.getName() << " ----- Velocidad: " << lancha2.getVelo() << " Distancia: " << lancha2.getDistRec() << "    Nitro: " << lancha2.getNitro() << endl;
    std::cout << "\033[31m";
    cout << "                             " << lancha3.getName() << " ----- Velocidad: " << lancha3.getVelo() << " Distancia: " << lancha3.getDistRec() << "    Nitro: " << lancha3.getNitro() << endl;
    cout << endl;
    cout << endl;
}

void lanchasTiro(Lanchas& lancha,int& vel) {
   
    cout << " Tira " << lancha.getName() << endl;
    Sleep(100);
    vel = numAle();
    lancha.setVelo(lancha.getVelo() + vel);
    cout << " " << lancha.getName() << " le ha salido, " << vel << endl;
    Sleep(2000);
    cout << " Velocidad actual: " << lancha.getVelo() << endl;
    Sleep(2000);
    lancha.calcDist();
    Sleep(1000);
    cout << " La distancia recorrida es de " << lancha.getDistRec() << " metros" << endl;
    cout << "---------------------" << endl;
    cout << " Velocidad:  " << lancha.getVelo() << " Distancia: " << lancha.getDistRec() << endl;
    cout << "\033[0m";
    system("pause");
}

// PRUEBA
bool funNitro(int nitro) {

    if (usoNitro == false) {
        int resNitro;
        cout << "Quieres usar nitro esta ronda?  [1]-SI   [2]- NO ";
        cin >> resNitro;
        usoNitro == true;
    } 
    
    return usoNitro;
    
} 

void funFinal() {
    if ((lancha1.getDistRec() > lancha2.getDistRec()) || (lancha1.getDistRec() > lancha3.getDistRec())) {
        cout << "Ganador de la carrea " << lancha1.getName() << endl;

    } if ((lancha2.getDistRec() > lancha1.getDistRec()) || (lancha2.getDistRec() > lancha3.getDistRec())) {
        cout << "Ganador de la carrea " << lancha2.getName() << endl;

    }
    if((lancha3.getDistRec() > lancha1.getDistRec()) || (lancha3.getDistRec() > lancha2.getDistRec())) {
        cout << "Ganador de la carrea " << lancha3.getName() << endl;
    }
}

int main()
{    
    srand(std::time(nullptr));
    int num;
    int turno = 0;
    std::string name;
    
    inicio();    
         
    for ( int i = 0; i < 1; i++){

        marcador();
        int vel1, vel2, vel3;
        cout << "\033[1;32m";
        lanchasTiro(lancha1,vel1);
        cout << "\033[34m";
        lanchasTiro(lancha2, vel2);
        cout << "\033[31m";
        lanchasTiro(lancha3, vel3);  
        system("cls");       

    }
    marcador();
    funFinal();
}

