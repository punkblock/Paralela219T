#include <cstdlib>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<math.h>

/*
Tarea 02 Ayudantia Paralela
Kevin Gatica Oportus
19.034.012-0
*/

using namespace std;

/*
 void escribirArchivo(){
    ofstream f;
    f.open("archivo.txt",ios::out);//crear archivo.txt

    int num=0;
    for (int i=0;i<100000;i++){//escribe los 100k random
        num = rand();
        f<<num<<endl;
    }
 }

 void leerArchivo(){
    ifstream f("archivo.txt");
    int arreglo[100000];
    char aux[100];
    int auxx=0;
    int i=0;

    //leer archivo
    while(!f.eof()){
        //getline(f,aux);
        f >> aux;
        arreglo[i]=atoi(aux);
        if(i<10)
        {
            cout << arreglo[i] << endl;
        }
        i++;
    }
    f.close();
 }
*/
 void arregloRandom(int arreglo[]){
    for(int i=0;i<100000;i++){
        arreglo[i] =rand();
        //cout<<arreglo[i]<<endl;
    }
 }

 float prom(int arreglo[], float promedio){
    for (int i=0;i<100000;i++){
        promedio = promedio + arreglo[i];
    }
    promedio = promedio/100000;
    //cout << "El promedio11 es= " << promedio << endl;
    return promedio;
 }

 float var(int arreglo[], float promedio){
    double varianza = 0;
    double sumatoria = 0;

    for (int i=0;i<100000;i++){
        sumatoria = sumatoria + pow(arreglo[i] - promedio,2);
    }
    varianza = sumatoria / 100000;

    return varianza;
 }


int main(int argc, char** argv) {

    //escribirArchivo();
    //leerArchivo();
    int arreglo[100000];
    float promedio = 0;
    double varianza = 0;
    double desviacion = 0;

    arregloRandom(arreglo);
    promedio = prom(arreglo,promedio);

    cout << "El promedio es= " << promedio << endl;

    varianza = var(arreglo,promedio);

    cout << "La varianza es= " << varianza << endl;

    desviacion = sqrt(varianza);

    cout << "La desviacion es= " << desviacion << endl;

    return 0;
}


