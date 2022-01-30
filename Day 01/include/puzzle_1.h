#include <iostream>

class Puzzle_1 {
  
  public:
    static void SolucionA();
    static void SolucionB();

    
  private:
    static int ContadorMeasurements(std::size_t Size);
    static int AcumuladorMeasurements(std::size_t Start, std::size_t Size);

};