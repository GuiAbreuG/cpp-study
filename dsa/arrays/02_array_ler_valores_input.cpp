
    // programa de array interativo com o usuario

    #include <iostream>
    using namespace std;
    int main() {
        
        const int tamanhoDoArray = 5;
        int array[tamanhoDoArray];
        
        cout << "\n";
        
        for (int i = 0; i < tamanhoDoArray; i++) {
            cout << "   Digite o valor da posição " << i << ": ";
            cin >> array[i];
        }
            
        cout << endl;
            
        cout << "   Valores do array: (";
        
        for (int i = 0; i < tamanhoDoArray; i++) {
            cout << array[i];
            
            if (i < tamanhoDoArray - 1) {
                cout << ", ";
            }
        }	

        cout << ") ";
        
        return 0;	
        
    }	
