#include "puzzle_2.h"
#include "utilidades.h"
#include <iostream>
#include <array>
#include <string>
#include<sstream>

Puzzle_2::Puzzle_2() {
  Input = Utilidades::Fichero("Puzzle_2.input");
  //std::cout << "continua";
}

// 2102357
void Puzzle_2::SolucionA(){
  std::cout << CalculoFinal(false) << "\n";    
}

// 2101031224
void Puzzle_2::SolucionB(){
  std::cout << CalculoFinal(true) << "\n";    

}

int Puzzle_2::CalculoFinal(bool UsarAim) {
  int Horizontal = 0;
  int Profundidad = 0;
  int Aim = 0;
  for (const std::string& Archivo_Actual : Input) {
    
    std::stringstream Archivo_Actual_Stream(Archivo_Actual); //imprime todo
    std::string Direccion;

    Archivo_Actual_Stream >> Direccion;

    int Magnitud = 0;
    Archivo_Actual_Stream >> Magnitud;

    if (Direccion == "forward") {
      Horizontal += Magnitud;            // +
      if(UsarAim) {
        Profundidad +=  Aim * Magnitud;
      }
    }
    else if (Direccion == "up") {
      if (UsarAim) {
        Aim -= Magnitud;
      } 
      else {
        Profundidad -= Magnitud;          // -
      }
    }
    else if (Direccion == "down") {
      if (UsarAim) {
        Aim += Magnitud;
      }
      else {
        Profundidad += Magnitud;
      }
    } 
    else {
      Utilidades::ComprobarNoLimite();
    }
  }
  return Horizontal * Profundidad;
}
