
  // programa que conta e soma valores pares e impares
  // 15.05.26
  
    #include <iostream>
    using namespace std;
    int main() {
        
        int tamanhoDoArray;
        
        cout << "\n Digite o tamanho do array: "; 
        cin >> tamanhoDoArray;
        
        while (tamanhoDoArray > 10 || tamanhoDoArray <= 0){
          cout << "   Tamanho invalido! Digite novamente: ";
          cin >> tamanhoDoArray;
        }
        
        int array[11];
        
        for (int i = 0; i < tamanhoDoArray; i++) {
            cout << "    Digite o valor do indice " << i << " do array: ";
            cin >> array[i];
        }
        
        int quantiaDePares = 0;
        int somaValoresPares = 0;
        
        int quantiaDeImpares = 0;
        int somaValoresImpares = 0;
        
        cout << " O array ficou: (";
        for (int i = 0; i < tamanhoDoArray; i++) {
            cout << array[i];
            
            if (array[i] % 2 == 0) {
                quantiaDePares += 1;
                somaValoresPares += array[i];
            } else {
                quantiaDeImpares += 1;
                somaValoresImpares += array[i];
                
                if (i < tamanhoDoArray - 1) {
                    cout << ", ";
                }
            }
        }
        cout << ") \n\n";
    
        cout << " A quantia e soma dos pares é: " << quantiaDePares << " e " << somaValoresPares << endl;
        cout << " A quantia e soma dos impares é: " << quantiaDeImpares << " e " << somaValoresImpares << endl;
        
        return 0;
        
    }
