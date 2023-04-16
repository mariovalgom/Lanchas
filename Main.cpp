
#include "lanchas.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

#include <chrono>
#include <thread>
#include<windows.h>

using namespace std;

int numAle() {    
    int aleatorio = (std::rand() % 6) + 1;
    return aleatorio;
}

int main()
{    
    srand(std::time(nullptr));
    int num;
    int turno = 0;
    std::string name;
    Lanchas lancha1("PezMarino", 0, 0, 1);
    Lanchas lancha2("AquaWoman", 0, 0, 1);
    Lanchas lancha3("PepeStone", 0, 0, 1);

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
     
    
    for ( int i = 0; i < 3; i++)
    {
        cout << "\033[1;32m";
        cout << "                             " << lancha1.getName() << " Distancia: " << lancha1.getDistRec() << "    Nitro: " << lancha1.getNitro() << endl;
        cout << "\033[34m";
        cout << "                             " << lancha2.getName() << " Distancia: " << lancha2.getDistRec() << "    Nitro: " << lancha2.getNitro() << endl;
        std::cout << "\033[31m";
        cout << "                             " << lancha3.getName() << " Distancia: " << lancha3.getDistRec() << "    Nitro: " << lancha3.getNitro() << endl;
        cout << endl;
        cout << endl;
        cout << "\033[1;32m";
        cout << " Tira " << lancha1.getName() << endl;
        Sleep(100);
        int vel = numAle();
        lancha1.setVelo( lancha1.getVelo() + vel);
        cout << " " << lancha1.getName() << " le ha salido, " << vel << endl;
        Sleep(2000);        
        cout << " Velocidad actual: " << lancha1.getVelo() << endl;        
        Sleep(2000);
        lancha1.calcDist();
        Sleep(1000);
        cout << " La distancia recorrida es de " << lancha1.getDistRec() << " metros" << endl;
        cout << "---------------------" << endl;
        cout << " Velocidad:  " << lancha1.getVelo() << " Distancia: " << lancha1.getDistRec() << endl;  
        cout << "\033[0m";
        system("pause");


        cout << "\033[34m";
        cout << " Tira " << lancha2.getName() << endl;
        Sleep(100);
        int vel2 = numAle();
        lancha2.setVelo(lancha2.getVelo() + vel2);
        cout << " " << lancha2.getName() << " le ha salido, " << vel2 << endl;
        Sleep(2000);
        cout << " Velocidad actual: " << lancha2.getVelo() << endl;
        Sleep(2000);
        lancha2.calcDist();
        Sleep(1000);
        cout << " La distancia recorrida es de " << lancha2.getDistRec() << " metros" << endl;
        cout << "---------------------" << endl;
        cout << " Velocidad:  " << lancha2.getVelo() << " Distancia: " << lancha2.getDistRec() << endl;
        std::cout << "\033[0m";
        system("pause");


        cout << "\033[31m";
        cout << " Tira " << lancha3.getName() << endl;
        Sleep(100);
        int vel3 = numAle();
        lancha3.setVelo(lancha3.getVelo() + vel3);
        cout << lancha3.getName() << " le ha salido, " << vel3 << endl;
        Sleep(2000);
        cout << " Velocidad actual: " << lancha3.getVelo() << endl;
        Sleep(2000);
        lancha3.calcDist();
        Sleep(1000);
        cout << " La distancia recorrida es de " << lancha3.getDistRec() << " metros" << endl;
        cout << "---------------------" << endl;
        cout << " Velocidad:  " << lancha3.getVelo() << " Distancia: " << lancha3.getDistRec() << endl;
        std::cout << "\033[0m";
        system("pause");
        system("cls");

    }
}

