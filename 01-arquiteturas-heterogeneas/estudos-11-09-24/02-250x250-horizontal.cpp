#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // Fazendo um alias para std::ofstream pra facilitar
    std::ofstream imageOut;

    std::cout << "Imagem 250x250 horizontal" << std::endl;

    // Abrindo a imagem
    imageOut.open("./images/image-250x250-horizontal.ppm");

    // Criando o cabeçalho
    std::cout << "Escrevendo o cabeçalho" << std::endl;
    imageOut << "P3" << std::endl;
    imageOut << "250 250" << std::endl;
    imageOut << "255" << std::endl;

    // Escrevendo o corpo da imagem
    
    std::cout << "Escrevendo o corpo da imagem" << std::endl;

    for(int i = 0; i < 250; i++){
        for(int j = 0; j < 250; j++){
            if(i < 125){
                imageOut << "255 255 255"<< std::endl;
            }
            else{
                imageOut << "0 0 0"<< std::endl;
            }
        }
        imageOut << std::endl;
    }


    // Fechando a imagem

    imageOut.close();

    std::cout << "Imagem criada com sucesso!" << std::endl;

    return 0;
}