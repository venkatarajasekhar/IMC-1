
//
//  main.cpp
//  IMC
//
//  Created by Melanie Vielma on 19/01/16.
//  Copyright © 2016 Melanie Vielma. All rights reserved.
//

#include <iostream>
using namespace std;
//Matrícula: A00818905

int main(int argc, const char * argv[]) {
    // Declaración de variables
    int peso;
    double estatura, imc;
    
    // Leer datos de entrada
    // Escritura
    cout<< "Teclea tu peso: ";
    // Leer
    cin>> peso;
    
    cout<< "Teclea tu estatura: ";
    // Leer
    cin>> estatura;
    
    // Calcular imc
    imc= peso/ (estatura*estatura);
    
    // Desplegar resultado
    cout<<"Tu imc = "<<imc<<endl;
    
    
    return 0;
}
