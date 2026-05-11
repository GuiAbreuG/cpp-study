
    #include <iostream>
    using namespace std;
    
    int main() {

        int array[10];
        int tamanhoDoArray;
        
        cout << "\n Digite o tamanho do array! O tamanho é: ";
        cin >> tamanhoDoArray;
        
        while (tamanhoDoArray > 10 || tamanhoDoArray < 0) {
            cout << "     Tamanho Inválido (Maior que 10, menor que zero). Tente Novamente! ";
            cout << "\n     O novo tamanho do array é: ";
            cin >> tamanhoDoArray;
            cout << "\n";
        }
        
        cout << "\n Digite os valores do array! " << endl;
        for (int i = 0; i < tamanhoDoArray; i++) {
            cout << "   Digite o valor, cujo índice é " << i << ": ";
            cin >> array[i];
        }
        
        cout << "\n O array ficou: (";
        for (int i = 0; i < tamanhoDoArray; i++) {
            cout << array[i];
            
            if (i < tamanhoDoArray - 1) {	cout << ", "; 	}

        }
        cout << ")";
    
        return 0;

    }
