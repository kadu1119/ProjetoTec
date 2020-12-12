#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

struct CompromissoStruct{
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
    string compromisso;
    
    void insere(int stdia, int stmes, int stano, int sthora, int stminuto, string stcompromisso){
        dia=stdia;
        mes=stmes;
        ano=stano;
        hora=sthora;
        minuto=stminuto;
        compromisso=stcompromisso;
    }
    
    void mostra(){
        cout << "O compromisso esta marcado para: " << dia << "/" << mes << "/" 
        << ano << " - " << hora << ":" << minuto << " - " << compromisso;
    }
};
 


    
    int opcao, continua1, continua2, continua3, continua4;
    string nome, pessoas, compromissoTeste;
    vector<string> listaDePessoas;
    vector<string> compromissosMarcados;
 

    cout << "Informe o que deseja fazer: \n 1-Incluir pessoas \n 2-Marcar um compromisso \n 3-Exibir \n 4-Sair \n";
    cin >> opcao;
    
    switch(opcao){
        case 1: cout << "Você escolheu a opção para Incluir Pessoas: \n 1-Continuar \n 2-Voltar \n";
            cin >> continua1;
            if (continua1 == 1)
            {
                for (char ch = 'n'; ch != 's';)
                {
                    cout << "Informe o nome completo: ";
                    cin.ignore();
                    getline(cin, nome);
                    listaDePessoas.push_back(nome);

                    for (int i = 0; i < listaDePessoas.size(); i++)
                    {
                        cout << listaDePessoas[i] << "\n";
                    }

                    cout << "Deseja sair (s/n)?";
                    rewind(stdin);
                    scanf("%c", &ch);
                }
            }
            break; 
                    
                    
                    
        case 2: cout << "Você escolheu a opção Marcar Compromisso: \n 1-Continuar \n 2-Voltar \n";
                cin >> continua2;
                    if(continua2==1){
                       
                        for (char ch='n'; ch!='s';){
                       
                       CompromissoStruct comp1;
                       cout << "Informe o dia: ";
                       cin >> stdia;
                       comp1.insere(stdia, 2, 2020, 1, 30, "teste do teste");
                       comp1.mostra();
                
                    
                       
                       
                        /*cout << "Informe o dia: ";
                        cin >> dia;
                        
                        cout << "Informe o mês: ";
                        cin >> mes;
                        
                        cout << "Informe o ano: ";
                        cin >> ano;
                        
                        cout << "Informe a hora: ";
                        cin >> hora;
                        
                        cout << "Informe o minuto: ";
                        cin >> minuto;
                        
                        cout << "Informe o compromisso: ";
                        cin.ignore( );
                        getline (cin, compromisso);
                        
                        cout << "Informe quem irá participar do compromisso: ";
                        compromissosMarcados.push_back(compromisso);
                        
                        for (int i = 0; i < compromissosMarcados.size(); i++){
                        cout << compromissosMarcados[i] << "\n";   
                        }*/
                        
                
                        
                        
                        
                        cout << " \n Deseja sair (s/n)?";
                        rewind(stdin);
                        scanf("%c", &ch);
                        }
                        
                    }else if(continua2==2){
                        cout << "Volte ao início e escolha as opções novamente";
                        break;
                    }else{
                        cout << "Algo deu errado, por favor, feche e repita a operação";
                        break;
                    }
                
                
                    break;
                    
         case 3: cout << "Você escolheu a opção Exibir, sendo assim digite: \n 1-Exibir pessoas da lista \n 2-Compromissos \n 3-Voltar \n";
                cin >> continua3;
                    if(continua3==1){
                        cout << "Você já incluiu as seguintes pessoas" << nome;
                    }else if(continua3==2){
                        cout << "Você já incluiu os seguintes compromissos" << compromissoTeste;
                    }else if(continua3==3){
                        cout << "Volte ao início e escolha as opções novamente";
                        break;
                    }else{
                        cout << "Algo deu errado, por favor, feche e repita a operação";
                        break;
                    }
                    break;           
                    
                    
                    
                    
        case 4: cout << "Você escolheu a opção Sair: \n 1-Continuar \n 2-Voltar \n";
                cin >> continua4;
                    if(continua4==1){
                        cout << "Você esta saindo do programa, até mais!";
                    }else if(continua4==2){
                        cout << "Ver com o professor como fazer para voltar ao outro menu";
                    }else{
                        cout << "Algo deu errado, por favor, feche e repita a operação";
                    }
                    break;
                    
                    
        default: cout << "Algo deu errado, por favor, feche e repita a operação";
                }
 

}



