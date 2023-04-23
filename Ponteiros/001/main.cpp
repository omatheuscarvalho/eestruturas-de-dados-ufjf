#include <iostream>
using namespace std;
void swapPonteiros(int *p1, int *p2)
{
    int holder = *p1;
    *p1 = *p2;
    *p2 = holder;
}

int main()
{
    int a, b;
    cout << "Digite o valor par a\n";
    cin >> a;
    cout << "Digite o valor para b\n";
    cin >> b;
    int *p1 = &a;
    int *p2 = &b;
    swapPonteiros(p1, p2);
    cout << "O novo valor de a é " << a << endl;
    cout << "O novo valor de b é " << b << endl;

    return 0;
}