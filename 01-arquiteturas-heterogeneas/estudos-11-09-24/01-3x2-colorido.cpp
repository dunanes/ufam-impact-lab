#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // Fazendo um alias para std::ofstream pra facilitar
    std::ofstream imageOut;

    // Abrindo a imagem
    imageOut.open("./images/image-3x2.ppm");

    std::cout << "Imagem 3x2 colorida" << std::endl;

    // Criando o cabeçalho
    std::cout << "Escrevendo o cabeçalho" << std::endl;
    imageOut << "P3" << std::endl;
    imageOut << "3 2" << std::endl;
    imageOut << "255" << std::endl;

    // Escrevendo o corpo da imagem
    
    std::cout << "Escrevendo o corpo da imagem" << std::endl;
    imageOut << "255 0 0" << std::endl; // Red
    imageOut << "0 255 0" << std::endl; // Green
    imageOut << "0 0 255" << std::endl; // Blue
    imageOut << "255 255 0" << std::endl; // Yellow
    imageOut << "255 255 255" << std::endl; // White
    imageOut << "0 0 0" << std::endl; // Black


    // Fechando a imagem

    imageOut.close();

    std::cout << "Imagem criada com sucesso!" << std::endl;

    return 0;
}