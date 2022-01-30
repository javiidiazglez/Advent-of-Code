# DAY 02

## Parte 1

- Solución: **2102357**

```cpp
int Puzzle_2::CalculoFinal() {
  int Horizontal = 0;
  int Profundidad = 0;
  for (const std::string& Archivo_Actual : Input) {
    
    std::stringstream Archivo_Actual_Stream(Archivo_Actual); //imprime todo
    std::string Direccion;

    Archivo_Actual_Stream >> Direccion;

    int Magnitud = 0;
    Archivo_Actual_Stream >> Magnitud;

    if (Direccion == "forward") {
      Horizontal += Magnitud;           // +
    }
    else if (Direccion == "up") {
      Profundidad -= Magnitud;          // -
    }
    else if (Direccion == "down") {
      Profundidad += Magnitud;
    } 
    else {
      Utilidades::ComprobarNoLimite();
    }
  }
  return Horizontal * Profundidad;
}

```

## Parte 2

- Solución: **2101031224**

```cpp
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

```