#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);

    string fraseInvertida = "";
    for(int i = frase.length() - 1; i >= 0; i--) 
    {
        fraseInvertida += frase[i];
    }

    cout << "Frase invertida: " << fraseInvertida << endl;
    
    return 0;
}
