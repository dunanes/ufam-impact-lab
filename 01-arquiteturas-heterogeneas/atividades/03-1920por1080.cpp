#include <iostream>
#include <fstream>

int main(){
    std::cout << "Impact Lab PPM" << std::endl;

    // Task 1: Abrir o arquivo de saída como "image.ppm"
    std::ofstream imageOut; // Usar ofstream para saída de dados!!!
    imageOut.open("images/image-1920x1080.ppm");

    // Verificar se o arquivo foi aberto corretamente
    if (!imageOut.is_open()) {
        std::cerr << "Erro ao abrir o arquivo para escrita!" << std::endl;
        return 1;
    }
    
    // Task 2: Escrever o cabeçalho da imagem PPM
    std::cout << "Escrevendo o cabeçalho" << std::endl;
    imageOut << "P3" << std::endl;      // Formato P3
    imageOut << "1920 1080" << std::endl;   // Tamanho da imagem (1920 colunas, 1080 linhas)
    imageOut << "255" << std::endl;     // Valor máximo de cor (255)

    // Task 3: Escrever o corpo da imagem (cores)
    std::cout << "Escrevendo o corpo da imagem" << std::endl;
    
    // Usando loops pra gerar a imagem 10x10
    
    int red = 0;
    int green = 0;
    int blue = 0; 

    for(int i = 0; i < 1080; i++){
        for(int j = 0; j < 1920; j++){
            red = 128;
            green  = (i * 255) / 1080;
            blue = 128;

            imageOut << red << " " << green << " " << blue << " ";
        }
        imageOut << std::endl;
    }


    // Fechar o arquivo
    imageOut.close();

    std::cout << "Arquivo PPM criado com sucesso!" << std::endl;
    
    return 0;
}
