#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // Fazendo um alias para ofstream pra facilitar
    ifstream imageIn;
    ofstream imageOut;

    // Abrindo a imagem
    imageIn.open("./images/image-3x2.ppm");
    imageOut.open("./images/image-3x2-copia.ppm");

    // Lendo o cabeçalho da imagem antiga
    string tipo, altura, largura, intervaloRGB;
    imageIn >> tipo;
    imageIn >> altura;
    imageIn >> largura;
    imageIn >> intervaloRGB;

    // Copiando pra imagem nova
    imageOut << tipo << endl;
    imageOut << altura << " " << largura << endl;
    imageOut << intervaloRGB << endl;

    // Não utilizei isso, talvez seja pro filtro
    // int valorRed = 0, valorGreen = 0, valorBlue = 0;

    // Copiar cada pixel, em trios, até o final do arquivo
    string red = "", green = "", blue = "";
    while(!imageIn.eof()){
        imageIn >> red;
        imageIn >> green;
        imageIn >> blue;
        imageOut << red << " ";
        imageOut << green << " ";
        imageOut << blue << " ";
    }

    // Fechando a imagem
    imageOut.close();

    cout << "Imagem criada com sucesso!" << endl;

    return 0;
}