# DAY 01

## Parte 1

- Solución: **1655**

```cpp
int Puzzle_1::ContadorMeasurements() {

  int contador = 0;

  for (size_t i = 1; i < Input.size(); ++i) { 
    int AnteriorMeasurements = Input[i - 1];
    int ActualMeasurements = Input[i];

    if (ActualMeasurements > AnteriorMeasurements) {
      ++contador;
    }
  }
  return contador;
}
```

## Parte 2

- Solución: **1683**

```cpp

int Puzzle_1::ContadorMeasurements(std::size_t Size) {

  int contador = 0;

  for (std::size_t i = Size + 1; i <= Input.size(); ++i) {                   // empezamos en 1, || Size + 1 = para empezar 3 y pasar al 4    
    int AnteriorMeasurements = AcumuladorMeasurements(i - Size - 1 , Size);  //  2000 - 1 - 1 = 1998 || 1 = size_t Size 
    int ActualMeasurements = AcumuladorMeasurements(i - Size, Size);         // 2000 - 1 = 1999

    if (ActualMeasurements > AnteriorMeasurements) {
      ++contador;
    }
  }
  return contador;
}

int Puzzle_1::AcumuladorMeasurements(std::size_t Start, std::size_t Size) {
  int Acumulador = 0;
  for (std::size_t i = Start; i < Start + Size; ++i ) {
    
    Acumulador += Input[i];
  }
  return Acumulador;
}
```