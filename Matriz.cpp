#include<iostream>
#include <iomanip> 
using namespace std;
#define TOTAL_ALUNOS 5
#define TOTAL_NOTAS 3

int main(){
  
    string nome_alunos[TOTAL_ALUNOS] = {"Ana", "Carlos", "João","Eduardo", "Gabriel"};
    int notas[TOTAL_ALUNOS][TOTAL_NOTAS] = {{4,8,6},{0,10,6},{5,6,8},{4,9,5},{7,6,9}};
    float media[TOTAL_ALUNOS];
    float media_classe = 0 ;
    
    
    for(int i=0; i < TOTAL_ALUNOS; i ++){
        
        
        int soma_notas = 0;
        
        for(int j=0; j<TOTAL_NOTAS; j++){
            
            soma_notas += notas[i][j];
            
        }
        
        media[i] = soma_notas/(float)(TOTAL_NOTAS);
        
        
        media_classe += media[i];
        
    }

    cout << "\n" << nome_alunos[i] << " media: " << media[i];

    return 0;
}
