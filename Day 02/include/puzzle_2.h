#include <iostream>
#include <string>
#include <vector>

class Puzzle_2 {  
  
  public:
    Puzzle_2();
    void SolucionA();
    void SolucionB();

  private:
    std::vector<std::string> Input;

    int CalculoFinal(bool UsarAim);

};