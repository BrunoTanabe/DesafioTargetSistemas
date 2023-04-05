#include <iostream>
using namespace std;

int main() 
{
    int n, a = 0, b = 1, c, i;
    bool encontrado = false;
    
    cout << "Digite um numero inteiro positivo: ";
    cin >> n;
    
    if (n == 0 || n == 1) 
    {
        cout << "O numero " << n << " pertence a sequencia de Fibonacci." << endl;
        return 0;
    }
    
    for (i = 2; i <= n; i++) 
    {
        c = a + b;
        a = b;
        b = c;
        
        if (c == n) 
        {
            encontrado = true;
            break;
        } else if (c > n) 
        {
            break;
        }
    }
    
    if (encontrado) 
    {
        cout << "O numero " << n << " pertence a sequencia de Fibonacci." << endl;
    } else 
    {
        cout << "O numero " << n << " nao pertence a sequencia de Fibonacci." << endl;
    }
    
    return 0;
}
