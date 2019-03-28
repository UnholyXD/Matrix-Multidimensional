#include <iostream>

using namespace std;

int main(){
    // declaração de variáveis para os index
    int i, j, k, l;
    //variável para fácil manipulação dos index
    int tam = 5;

    // declaração do vetor
    int a[tam][tam][tam][tam];

    // adicionando elementos no vetor
    for (i = 0; i < tam; i++) {
            for (j = 0; j < tam; j++) {
                for (k = 0; k < tam; k++) {
                    for (l = 0; l < tam; l++) {
                        a[i][j][k][l]= i+j+k+l;
                    }
                }
            }
        }

    // mostrando elementos do vetor
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            for (k = 0; k < tam; k++) {
                for (l = 0; l < tam; l++) {
                    cout.width(3);
                    cout.fill(' ');
                    cout<<a[i][j][k][l];
                }
                cout<<"\t";//tabulação
            }
            cout<<endl;//quebra de linha
        }
        cout<<endl;//quebra de linha
    }
}
