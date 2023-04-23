#include <iostream>
using namespace std;

void maiorMenorPonteiros(int *vet, int n, int *pmaior, int *pmenor)
{
    *pmaior = vet[0];
    *pmenor = vet[0];
    if (n == 0)
        return;
    for (int i = 1; i < n; i++)
    {
        if (vet[i] > *pmaior)
            *pmaior = vet[i];
        else if (vet[i] < *pmenor)
            *pmenor = vet[i];
    }
}
int main()
{
    int vet[] = {22, 10009, 2, 88, 1, 9};
    int n = 6;
    int maior, menor;
    maiorMenorPonteiros(vet, n, &maior, &menor);
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}