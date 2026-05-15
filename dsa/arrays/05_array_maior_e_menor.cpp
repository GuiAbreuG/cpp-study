
    // Exercício de encontrar o maior e o menor valor do array!

    #include <iostream>
    using namespace std;
    
    int main() {
        
        int tamanhoDoArray;
        
        cout << "\n Digite o tamanho do array! O tamanho é: ";
        cin >> tamanhoDoArray;
        
        while (tamanhoDoArray > 10 || tamanhoDoArray < 0) {
            cout << "     Tamanho Inválido (Maior que 10, menor que zero). Tente Novamente! ";
            cout << "\n     O novo tamanho do array é: ";
            cin >> tamanhoDoArray;
            cout << "\n";
        }

        int array[11]; 
        // Tamanho definido para não bugar o código,
        // int array[tamanhoDoArray] não pode 
        
        cout << "\n";
        for (int i = 0; i < tamanhoDoArray; i++) {
            cout << "   Digite o valor do indice " << i << ": ";
            cin >> array[i];
        }
        
        cout << "\n O array ficou: (";  
        for (int i = 0; i < tamanhoDoArray; i++) {
            cout << array[i];
            
            if (i < tamanhoDoArray - 1) {
                cout << ", ";
            }
        }
        cout << ")" << "\n";
        
        int maior = array[0];
        int menor = array[0];
        
        for (int i = 0; i < tamanhoDoArray; i++) {
            if (array[i] > maior) {
                maior = array[i];
            }
            
            if (array[i] < menor) {
                menor = array[i];
            }
        }
        
        cout << "\n O maior termo até agora é: " << maior;
        cout << "\n O menor termo até agora é: " << menor;
            
            return 0;
    }
