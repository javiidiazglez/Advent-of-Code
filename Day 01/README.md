# DAY 01

## Parte 1

- Solución: 1655

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
