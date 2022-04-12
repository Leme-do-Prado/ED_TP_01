#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

#define row 15
#define col 40

int main()
{
    int op;

    cout << "0. Saque" << endl;
    cout << "1. Extrato" << endl;
    cout << "2. Transferência" << endl;
    cout << "3. Depósito" << endl;
    cout << "Digite sua opção: ";
    cin >> op;
	
    switch(op)
    {
        case 0:
            cout<<"Opção selecionada: Finalizar"<<endl;
            cout<<"Programa encerrado. Até!";
            break;

        case 1:
            cout << "Opção selecionada: Reservar assento"<<endl; 
            int **arr[row][col]; 
            string r, s;
            cout<<"Fileira?"<<endl;
            cin>>r;
            cout<<"Assento?"<<endl;
            cin>>s;
            if(arr[r][s]='#'){
            	cout<<"Assento tomado. Selecionar outra poltrona.";
			}
           else{
				  cout<<"Assento disponível.";<<endl;
				  arr[r][s]='#';
				  cout<<"Reserva efetuada!";<<endl;	
			}  

        case 2:
            cout << "Opção selecionada: Mapa de ocupação"<<endl;
        
        	for(r = 0, r < row, r++)
			{
				for(s = 0, s < col)
					if(arr[r][s]='#')
					{
						s++
					}
					else{
						cout << '.';
						s++
					}
			}
			break;

        case 3:
            cout << "Opção selecionada: Faturamento"<<endl;
            
            int fat;
            	
            	for(r = 0, r < row, r++)
			{
				for(s = 0, s < col){
					if(row<5){
						fat=+50;
					} else if(row<10){
						fat=+30
					} else if(row<15){
						fat=+15
					}
				}
            break;

        default:
            cout << "Erro: Opção inválida"<<endl;
    }


	return 0;
}
