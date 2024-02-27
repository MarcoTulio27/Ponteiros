#include <iostream>

using namespace std;

float prodEscalar(int n, float x[], float y[]){
    float soma = 0;
    for(int i =0; i<n; i++){
        soma+= x[i] * y[i];

    }
    return soma;
}

int main()
{
    int n;
    cout << "Tamanho do vetor: ";
    cin >> n;

    float *vet1 = new float[n];
    float *vet2 = new float[n];

    cout << "Elementos do vetor1: ";
    for(int i =0; i<n; i++){
        cin >> vet1[i];
    }

    cout << "Elementos do vetor2: ";
    for(int i =0; i<n; i++){
        cin >> vet2[i];
    }

    float produto;

    produto = prodEscalar(n, vet1, vet2);
    cout << "Produto escalar dos vetores: " << produto;

    delete [] vet1;
    delete [] vet2;

    return 0;
}
