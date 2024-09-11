#include <iostream>
#include <fstream>

int main(){
    std::cout << "Impact Lab PPM" << std::endl;

    // Task 1: Abrir o arquivo de saída como "image.ppm"
    std::ofstream imageOut; // Usar ofstream para saída de dados!!!
    imageOut.open("images/image-2x3.ppm");

    // Verificar se o arquivo foi aberto corretamente

    if (!imageOut.is_open()) {
        std::cerr << "Erro ao abrir o arquivo para escrita!!" << std::endl;
        return 1;
    }
    
    // Task 2: Escrever o cabeçalho da imagem PPM

    std::cout << "Escrevendo o cabeçalho" << std::endl;
    imageOut << "P3" << std::endl;      // Formato P3
    imageOut << "3 2" << std::endl;   // Tamanho da imagem (10 colunas, 10 linhas)
    imageOut << "255" << std::endl;     // Valor máximo de cor (255)

    // Task 3: Escrever o corpo da imagem (cores)

    std::cout << "Escrevendo o corpo da imagem" << std::endl;
    imageOut << "255 0 0" << std::endl;     // Vermelho
    imageOut << "0 255 0" << std::endl;     // Verde
    imageOut << "0 0 255" << std::endl;     // Azul
    imageOut << "255 255 0" << std::endl;   // Amarelo
    imageOut << "255 255 255" << std::endl; // Branco
    imageOut << "0 0 0" << std::endl;       // Preto

    // Fechar o arquivo

    imageOut.close();

    std::cout << "Arquivo PPM criado com sucesso!" << std::endl;
    
    return 0;
}
