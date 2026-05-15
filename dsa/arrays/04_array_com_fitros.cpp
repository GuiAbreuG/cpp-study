
    // Programa para filtrar números por categoria
    
    #include <iostream>
    using namespace std;
    int main() {
        
        int tamanhoDoArray;
        cout << "\n Digite o tamanho do array. O tamanho é: ";
        cin >> tamanhoDoArray;
        
        while (tamanhoDoArray > 10 || tamanhoDoArray < 0) {
            cout << "   Valor Inválido. Maior que 10 ou menor que 0. Tente Novamente." << endl;
            cout << "   O valor é: ";
            cin >> tamanhoDoArray;
        }
        
        int array[10];
        
        cout << "\n";
        for (int i = 0; i < tamanhoDoArray; i++) {
            cout << " Digite o valor da posição " << i << ": ";
            cin >> array[i];
        }
        
        cout << endl;
        
        cout << " Valores PARES - Array: (";
        for (int i = 0; i < tamanhoDoArray; i++) {
        	if (array[i] % 2 == 0 && array[i] > 0) {
            	cout << array[i];
            		
            	if (i < tamanhoDoArray - 1) {
            	    cout << ", ";
            	}
            }
        }
        cout << ")"; 
        
        cout << " \n \n Valores - Array: (";
        
        for (int i = 0; i < tamanhoDoArray; i++) { 
            cout << array[i]; 
            if (i < tamanhoDoArray - 1) {
            	    cout << ", ";
            	}
        }
        cout << ")";
        
        cout << "\n \n Valores ÍMPARES - Array: (";
        for (int i = 0; i < tamanhoDoArray; i++) {
            if (array[i] % 2 != 0 && array[i] > 0) {
          	    cout << array[i];
          	    
          	      if (i < tamanhoDoArray - 1) {
            	    cout << ", ";
                }
                
            } 
        }
        cout << ")";
        
        bool temNegativo = false;
        cout << "\n\n Valores NEGATIVOS - Array: (";
        for (int i = 0; i < tamanhoDoArray; i++) {
            if (array[i] < 0 ) {
                cout << array[i] << " ";
                temNegativo = true;
            }
            
            if (i < tamanhoDoArray - 1) {
            	    cout << ", ";
            	}
        }
        cout << ")";
        
        cout << "\n \n Valores Múltiplos - Array: ";
        cout << "\n (Com base em um nº selecionado pelo user!) ";
        cout << "\n O número escolhido é: "; 
        
        int numero;	
        cin >> numero;
        
        cout << "\n Valores: Após escolha do número: ("; 
        for (int i = 0; i < tamanhoDoArray; i++) {
            if (numero != 0 && array[i] % numero == 0) {
                cout << array[i];
            } 
            
            if (i < tamanhoDoArray - 1) {
            	    cout << ", ";
            }
            
            if (numero == 0) {
            cout << " Zero! Não funciona! ";	
            } 	
        
        }
        cout << ")";
    
        return 0; 	
        
    }

    
