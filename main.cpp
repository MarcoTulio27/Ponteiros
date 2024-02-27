#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Tamanho do vetor: ";
    cin >> n;


    int *vet = new int[n];
    cout << "Elementos do vetor: " << endl;
    for(int i =0; i<n; i++){
        cin >> vet[i];
    }
    float soma = 0;
    for(int i =0; i<n; i++){
        soma+=vet[i];
    }
    float media = soma/n;
    cout << "Media dos elementos = " << media << endl;

    delete [] vet;

    return 0;
}
