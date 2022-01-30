#include<utilidades.h>
#include<filesystem>
#include<fstream>
//#include<assert.h>
#include <assert.h>


std::vector<std::string> Utilidades::Fichero(const std::filesystem::path& Path) {

  std::filesystem::exists(Path);

  std::vector<std::string> TodasLineas;
  std::ifstream Archivo{Path};
  std::string Archivo_Actual;

  while (std::getline(Archivo, Archivo_Actual)) {

    TodasLineas.push_back(Archivo_Actual);
  }

  return TodasLineas; //std::vector<std::string>{};

}

void Utilidades::ComprobarLimite(bool AAsert) {
  assert (AAsert);
  if (!AAsert) {
    std::terminate(); // fin
  }
}

void Utilidades::ComprobarNoLimite() { // comprueba el tamaño , si es false = no limite
  ComprobarLimite(false);
}