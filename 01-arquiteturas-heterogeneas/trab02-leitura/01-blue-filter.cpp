#include <iostream>
#include <fstream>

int main(){
    std::cout << "Impact Lab PPM" << std::endl;

    // Task 1: Read Image
    // Task 2: Edit image
    // Task 3: Write image

    // Abrindo arquivo de saída
    std::ofstream imageOut; // Usar ofstream para saída de dados!!!
    imageOut.open("images/image-10x10.ppm");

    // Verificar se o arquivo foi aberto corretamente
    if (!imageOut.is_open()) {
        std::cerr << "Erro ao abrir o arquivo para escrita!" << std::endl;
        return 1;
    }
    
    // Escrevendo o cabeçalho da imagem PPM
    std::cout << "Escrevendo o cabeçalho" << std::endl;
    imageOut << "P3" << std::endl;      // Formato P3
    imageOut << "10 10" << std::endl;   // Tamanho da imagem (10 colunas, 10 linhas)
    imageOut << "255" << std::endl;     // Valor máximo de cor (255)

    // 
    std::cout << "Escrevendo o corpo da imagem" << std::endl;
    
    // Fechar o arquivo
    imageOut.close();

    std::cout << "Arquivo PPM criado com sucesso!" << std::endl;
    
    return 0;
}
