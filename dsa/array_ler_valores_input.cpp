    
    #include <iostream>
    using namespace std;
    int main() {
        
        const int tamanhoDoVetor = 5;
        int array[tamanhoDoVetor];
        
        cout << "\n";
        
        for (int i = 0; i < tamanhoDoVetor; i++) {
            cout << "   Digite o valor da posição " << i << ": ";
            cin >> array[i];
        }
            
        cout << endl;
            
        cout << "   Valores do array: ( ";
        
        for (int i = 0; i < tamanhoDoVetor; i++) {
            cout << array[i] << " ";
        }	
      
        cout << ") ";
        
        return 0;	
        
    }	
