#include<filesystem>
#include<string>
#include<vector>

class Utilidades {

  public:
    static std::vector<std::string> Fichero(const std::filesystem::path& Path); //dinamico
    static void ComprobarLimite(bool AAsert);
    static void ComprobarNoLimite();

};