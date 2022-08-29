#include <iostream>
#include <locale.h> // adiciona caracteres ao sistema Ex: "ç"
#include <string.h>
using namespace std; //MEU DUESAKSDJASKDLJASKDJASKDLJASKDLJSKDJKDSJl
 int G = 0;
string Login1;
  int CodSenha;



class Aluno {
public:
  // Nota
  float MateriaMedia[12][51], Materia[12][3][51];


  // Cadastro Aluno
  int  Serie[51];
 string Nome[51], email[51], telefone[51], Turno[51], CPF[51], RG[51];
  int cont;
  int codMatricula = 1;
 int quant_aluno = 0;

  // Frequência
bool presenca[51][12][31];
  // Void Frequência

  void frequenciaaluno() {
    cout << "Digite o código da matricula do aluno:\n";
    int m = 0, d = 0;
    cin >> codMatricula;
    cout << "Digite o mês da frequência:\n";
    cin >> m;
    cout << "Digite o dia em questão:\n";
    cin >> d;
    m--;
    d--;
    cout << "O aluno estava presente? (1 para sim e 0 para não) \n";
    cin >> presenca[codMatricula][m][d];
  }; 

  void Frequenciatodos() {
    bool confirm;
    int Contador;
    int m = 0, d = 0;
    cout << "O mês que está: \n";
    cin >> m;
    cout << "O dia que está: \n";
    cin >> d;
    m--;
    d--;
    for (Contador = 1; Contador <= quant_aluno;
         Contador++)
                {
        cout << "Nome do aluno: " << Nome[Contador] << endl;
        cout << "O aluno estava presente? (1 para sim e 0 para não) \n";
        cin >> presenca[Contador][m][d];
      
      cout << "                            " << endl;
    };
 ;} // fim frequenciatodos

  void CadFrequencia() {
    int m = 0, d = 0;
    //int presenca[51][12][31];
    int op = 0;
    int codMatricula = 0;
cout<<"============================================================="<<endl;
    cout << "Deseja acessar qual opção?\n";
    cout << "1 - Frequência de um aluno específico:\n";
    cout << "2 - Frequência com todos alunos da turma:\n";
    cout<< "3 - Acessar frequência de um aluno: \n";
    cout <<"4 - Voltar: \n"; cout<<"============================================================="<<endl;
    cout<<"Digite:";
    cin >> op;
    
   do{ switch (op) {
    
    case 1: {
    if (quant_aluno != 0){frequenciaaluno();}else{cout << "Nenhum aluno no sistema. \n";};
      cout<<"============================================================="<<endl;
    cout << "Deseja acessar qual opção?\n";
    cout << "1 - Frequência de um aluno específico:\n";
    cout << "2 - Frequência com todos alunos da turma:\n";
    cout<< "3 - Acessar frequência de um aluno: \n";
    cout <<"4 - Voltar: \n"; cout<<"============================================================="<<endl;
    cout<<"Digite: ";
    cin >> op;
      break; }
    /*  bool Confirm;

      cout << "Frequência inserida com sucesso, deseja inserir mais uma frequência?"
           << endl
           << "Digite 0 para não e 1 para sim: " << endl;
      cin >> Confirm;
      if (!Confirm){break;}
      while (Confirm){
      if (!Confirm) {break;} else {
        Frequenciatodos();
        
         cout << "Frequência inserida com sucesso, deseja inserir mais uma frequência?"
           << endl
           << "Digite 0 para não e 1 para sim: " << endl;
      cin >> Confirm;
      };};
     break;*/

    case 2:{
      if (quant_aluno != 0){Frequenciatodos();}else{cout << "Nenhum aluno no sistema. \n";};
      
       cout<<"============================================================="<<endl;
    cout << "Deseja acessar qual opção?\n";
    cout << "1 - Frequência de um aluno específico:\n";
    cout << "2 - Frequência com todos alunos da turma:\n";
    cout<< "3 - Acessar frequência de um aluno: \n";
    cout <<"4 - Voltar: \n"; cout<<"============================================================="<<endl;
    cout<<"Digite: ";
      cin>>op;
      }
        
     
       break;  
    case 3: {
    int m, d;
    if (quant_aluno != 0){
    cout << "Digite o código da matricula do aluno:\n";
    cin >> codMatricula;
    cout << "Digite o mês da frequência:\n";
    cin >> m;
    cout << "Digite o dia em questão:\n";
    cin >> d;
    m --;
    d--;
    if(!presenca[codMatricula][m][d]){
    cout << "O aluno "<<Nome[codMatricula]<<", não estava presente.\n";}
    else if (presenca[codMatricula][m][d]) {
        cout << "O aluno "<<Nome[codMatricula]<<", estava presente.\n";}}
      else{cout << "============================================================="
  << "\nNenhum aluno no sistema. \n";}
             cout<<"============================================================="<<endl;
    cout << "Deseja acessar qual opção?\n";
    cout << "1 - Frequência de um aluno específico:\n";
    cout << "2 - Frequência com todos alunos da turma:\n";
    cout<< "3 - Acessar frequência de um aluno: \n";
    cout <<"4 - Voltar: \n"; cout<<"============================================================="<<endl;
    cout<<"Digite: ";
      cin>>op;
      }

      
    break;

     case 4: cout<<"Voltando..."<<endl;
     break;
     
default:
     cout<<"Opção não encontrada, tente novamente usando um dos números disponiveis. "<<endl;
 break;
  
    } // Fim CadFrequenciaswitch
}while(op != 4); //fim while frequência
  } // fim Cadfrequencia

  // Void Formulário
  void FormularioAluno() {
cout << "Digite a série do aluno " << endl;
        cin >> Serie[codMatricula];

        if(Serie[codMatricula]>3){ cout<<"Só temos suporte pra escolas com somente 3 séries por enquanto."<<endl<<endl; 
          
          Serie[codMatricula]=0;
          
         return;}
        
        cout << "Digite o nome completo do aluno: " << endl;
       cin.ignore();
        getline(cin, Nome[codMatricula]);

        cout << "Digite o email do aluno: " << endl;
        cin >> email[codMatricula];

        cout << "Digite o CPF do aluno:" << endl;
        cin >> CPF[codMatricula];

        cout << "Digite o RG do aluno:" << endl;
        cin >> RG[codMatricula];

        cout << "Digite o telefone de " << Nome[codMatricula] << endl;
        cin >> telefone[codMatricula];
        
      
      

        cout << "Digite o turno de " << Nome[codMatricula] << endl;
        cin >> Turno[codMatricula];

        quant_aluno++;
        codMatricula++;
  


  } // fim voidFormulárioAluno()

  
  void inserinota(){
    int materia, trimestre;
    
    while(materia!=13){
    cout << "Deseja inserir nota em qual matéria?" << endl;
    cout << "\t 1 - Língua Portuguesa \n \t 2 - Matemática \n \t 3 - Geografia "
            "\n \t 4 - História \n \t 5 - Física\n \t 6 - Química \n \t 7 - "
            "Biologia\n \t 8 - Artes\n \t 9 - Educação Física\n \t 10 - "
            "Sociologia\n \t 11 - Filosofia\n \t 12 - Inglês \n";
      cout<<"\t 13 - Voltar. "<<endl;
     // Matéria, trimestre
    cin >> materia;
      if(materia==13){break;}
       if(materia>13){cout<<"Somente 13 opções são aceitas meu querido."<<endl;}
      

    cout << "A que aluno deseja atribuir nota? Digite o código da matricula dele: "<< endl;
    cin >> codMatricula;

    cout << "Deseja inserir nota em qual trimestre?" << endl;
    cin >> trimestre;

        if(trimestre>3){cout<<"Só comportamos o modelo de 3 unidades nesse aplicativo."<<endl;}
        

    materia--;
    trimestre--;

    cout << "Digite a nota: " << endl;
    cin >> Materia[materia][trimestre][codMatricula];

          if(Materia[materia][trimestre][codMatricula]>10){cout<<"É permitido somente uma atribuição de até 10 pontos."<<endl;}
          else{
    

    MateriaMedia[materia][codMatricula] =
        (Materia[materia][0][codMatricula] + Materia[materia][1][codMatricula] +
         Materia[materia][2][codMatricula])/3;

    cout << "Média: " << MateriaMedia[materia][codMatricula] << endl;}//fim else
      }//fim while
    };
  // void Boletim


  void CadNota() {
int op; 
    cout<<"================================================"<<endl;
    cout << "Escolha a opção referente a notas: \n";
    cout<< "1 - Para inserir notar: \n";
    cout<< "2 - Acessar nota de um aluno: \n";
    cout<< "3 - Acessar notas de todos os alunos: \n";
    cout <<"4 - Acessar boletim de um aluno: \n";
    cout<<"5 - Voltar. \n";
    cout<<"================================================"<<endl;
    cout<<"Digite: ";
    cin>>op;
    
    
   while(op != 5){switch(op){

      case 0:
      break;

      
case 1:{
  bool confirm;
  int m;//Materia
  int t;//Trimestre



  inserinota();
      
        cout<<"================================================"<<endl;
    cout << "Escolha a opção referente a notas: \n";
    cout<< "1 - Para inserir notar: \n";
    cout<< "2 - Acessar nota de um aluno: \n";
    cout<< "3 - Acessar notas de todos os alunos: \n";
    cout <<"4 - Acessar boletim de um aluno: \n";
    cout<<"5 - Voltar. \n";
    cout<<"================================================"<<endl;
    cout<<"Digite: ";
    cin>>op;
      }
  
      break;
    case 2:
      int m, t;
  cout<<"Matricula do Aluno: \n";
    cin>>codMatricula;
 cout<<"Insira a materia: \n";
       cout << "\t 1 - Língua Portuguesa \n \t 2 - Matemática \n \t 3 - Geografia "
            "\n \t 4 - História \n \t 5 - Física\n \t 6 - Química \n \t 7 - "
            "Biologia\n \t 8 - Artes\n \t 9 - Educação Física\n \t 10 - "
            "Sociologia\n \t 11 - Filosofia\n \t 12 - Inglês \n";
      cout<<"\t 13 - Voltar. "<<endl;
    cin>>m;
      if(m==13){break;}
    cout<<"Insira o trimestre: \n";
    cin>>t; 
    m--;
    t--;
    cout<<"A nota do aluno, "<<Nome[codMatricula]<<" é igual a "<<Materia[m][t][codMatricula]<<" no "<<t+1<<" trimestre";
    cout<<" e a média é de "<<MateriaMedia[m][codMatricula]<<endl;

      break;
    case 3:
      cout << "\t 1 - Língua Portuguesa \n \t 2 - Matemática \n \t 3 - Geografia \n \t 4 - História \n \t 5 - Física\n \t 6 - Química \n \t 7 - Biologia\n \t 8 - Artes\n \t 9 - Educação Física\n \t 10 - Sociologia\n \t 11 - Filosofia\n \t 12 - Inglês \n";
 cout<<"Insira a materia: \n";
    cin>>m;
    cout<<"Insira o trimestre: \n";
    cin>>t; 
    m--;
    t--;
for (cont = 1; cont <= quant_aluno;cont++) /*Se cont for menor que 50, cont é somado a mais um.*/{
  int i;
  for (i = 1; i <= cont; i++)
  cout << " Cod Matricula (O último): [" << i << "]" << endl;
  cout << " Nome do aluno: " << Nome[cont] << endl;
  cout << " Nota do trimestre: "<< Materia[m][t][cont]<<endl;
  cout<<"Média: " <<MateriaMedia[m][codMatricula];
  cout << "                            " << endl;
  }break; 

    case 4: 
int h;
      
    cout<<"Matricula do Aluno: \n";
    cin>>codMatricula;
    for( h=1; h < 4;h++){
      cout<< "Unidade: "<<h<<endl;
      cout<< "Língua Portuguesa: "<< Materia[0][h][codMatricula]<< " Média: "<<MateriaMedia[0][codMatricula]<<endl;
      
      cout<<"Matemática: "<<Materia[1][h][codMatricula]<< " Média: "<<MateriaMedia[1][codMatricula]<<endl;
      
      cout<<"Geografia: "<<Materia[2][h][codMatricula]<< " Média: "<<MateriaMedia[2][codMatricula]<<endl;
      
      cout<<"História: "<<Materia[3][h][codMatricula]<< " Média: "<<MateriaMedia[3][codMatricula]<<endl;
      
      cout<<"Física: "<<Materia[4][h][codMatricula]<< " Média: "<<MateriaMedia[4][codMatricula]<<endl;
      
      cout<<"Química: "<<Materia[5][h][codMatricula]<< " Média: "<<MateriaMedia[5][codMatricula]<<endl;
      
      cout<<"Biologia: "<<Materia[6][h][codMatricula]<< " Média: "<<MateriaMedia[6][codMatricula]<<endl;
      
      cout<<"Artes: "<<Materia[7][h][codMatricula]<< " Média: "<<MateriaMedia[7][codMatricula]<<endl;
      
      cout<<"Educação Física: "<<Materia[8][h][codMatricula]<< " Média: "<<MateriaMedia[8][codMatricula]<<endl;
      
      cout<<"Sociologia: "<<Materia[9][h][codMatricula]<< " Média: "<<MateriaMedia[9][codMatricula]<<endl;
      
      cout<<"Filosofia: "<<Materia[10][h][codMatricula]<< " Média: "<<MateriaMedia[10][codMatricula]<<endl;
      
      cout<<"Inglês: "<<Materia[11][h][codMatricula]<< " Média: "<<MateriaMedia[11][codMatricula]<<endl;

      cout << "                            " << endl;

      
    }// fim for
  cout<<"================================================"<<endl;
    cout << "Escolha a opção referente a notas: \n";
    cout<< "1 - Para inserir notar: \n";
    cout<< "2 - Acessar nota de um aluno: \n";
    cout<< "3 - Acessar notas de todos os alunos: \n";
    cout <<"4 - Acessar boletim de um aluno: \n";
    cout<<"5 - Voltar. \n";
    cout<<"================================================"<<endl;
    cout<<"Digite: ";
    cin>>op;
      
    break;

    case 5: cout<<"Voltando..."<<endl;
    break;
    
    default: cout<<"Opção invalida. \n";
      break;
    
      }//fim switch nota 
    };//fim do (do while) 
    };
    

  // Void Principal
  void CadAluno() {
    int opcao;

    Aluno Estudante;

    do {

      int i, cont;

      cout<<"============================================================="<<endl;
      cout << "Opcão: " << endl;
      cout << endl
           << "1 - Modificar as informações de um aluno: " << endl;
       
      cout << "2 - Cadastrar um novo aluno no sistema: " << endl;
      cout << "3 - Painel de notas: " << endl;
      cout << "4 - Informações de determinado aluno: "
           << endl;
      cout << "5 - Informações de todos os alunos: "
           << endl;
      cout << "6 - Painel de frequência: " << endl;
      cout << "7 - Sair: " << endl;
     cout<<"============================================================="<<endl;
      cout<<"Digite: ";
      cin >> opcao;

      switch (opcao) {

      case 0:
        break;

      case 1:
      if(quant_aluno != 0) {
        cout << "Digite o código da matricula do aluno." << endl;
        cin >> codMatricula;

          cout << "Digite a série do aluno " << endl;
        cin >> Serie[codMatricula];

        if(Serie[codMatricula]>3){ cout<<"Só temos suporte pra escolas com somente 3 séries por enquanto."<<endl; 
          
          Serie[codMatricula]=0;
          
          break;}

        cout << "Digite o nome completo do aluno (Tudo junto): " << endl;
         cin.ignore();
        getline(cin, Nome[codMatricula]);

        cout << "Digite o email do aluno: " << endl;
        cin >> email[codMatricula];

        cout << "Digite o CPF do aluno:" << endl;
        cin >> CPF[codMatricula];

        cout << "Digite o RG do aluno:" << endl;
        cin >> RG[codMatricula];

        cout << "Digite o telefone de " << Nome[codMatricula] << endl;
        cin >> telefone[codMatricula];

        cout << "Digite a série de " << Nome[codMatricula] << endl;
        cin >> Serie[codMatricula];

        cout << "Digite o turno de " << Nome[codMatricula] << endl;
        cin >> Turno[codMatricula];
        break;} else {cout << "Nenhum aluno cadastrado ainda."<<"\n";
        break;}; //fim else

      case 2:
        
          cout << "Digite a série do aluno " << endl;
        cin >> Serie[codMatricula];

        if(Serie[codMatricula]>3){ cout<<"Só temos suporte pra escolas com somente 3 séries por enquanto."<<endl; 
          
          Serie[codMatricula]=0;
          
          break;}
        
        cout << "Digite o nome completo do aluno: " << endl;
       cin.ignore();
        getline(cin, Nome[codMatricula]);

        cout << "Digite o email do aluno: " << endl;
        cin >> email[codMatricula];

        cout << "Digite o CPF do aluno:" << endl;
        cin >> CPF[codMatricula];

        cout << "Digite o RG do aluno:" << endl;
        cin >> RG[codMatricula];

        cout << "Digite o telefone de " << Nome[codMatricula] << endl;
        cin >> telefone[codMatricula];
        
      
      

        cout << "Digite o turno de " << Nome[codMatricula] << endl;
        cin >> Turno[codMatricula];

        quant_aluno++;
        codMatricula++;

        bool Confirm;

        cout << "Aluno inserido com sucesso, deseja inserir um novo aluno?"
             << endl
             << "Digite 0 para não e 1 para sim: " << endl;
        cin >> Confirm;

        if (!Confirm) {
          break;
        }

        while (Confirm) {

          if (!Confirm) {
            break;
          }

          else if (Confirm) {
            FormularioAluno();

            cout << "Aluno inserido com sucesso, deseja inserir um novo aluno?"
                 << endl
                 << "Digite 0 para não e 1 para sim: " << endl;
            cin >> Confirm;

          } // Encerra o else if
        }   // encerra o while que está dentro de case 1

        break;

      case 3:
        bool confirm;
        CadNota();

        break;

      case 4:

        cout << "Qual cadastro você deseja ver?" << endl;
        cin >> codMatricula;

        cout << "Nome do aluno: " << Nome[codMatricula] << endl;
        cout << "Email do aluno: " << email[codMatricula] << endl;
        cout << "CPF do aluno: " << CPF[codMatricula] << endl;
        cout << "RG do aluno: " << RG[codMatricula] << endl;
        cout << "Telefone do aluno: " << telefone[codMatricula] << endl;
        cout << "Serie do aluno: " << Serie[codMatricula] <<"° Ano"<< endl;
        cout << "Turno do aluno: " << Turno[codMatricula] << endl;
        break;

      case 5:
             
        for (cont = 1; cont <= quant_aluno;
             cont++) /*Se cont for menor que quant_aluno, cont é somado a mais um.*/
       
        {

            cout << "Cod Matricula (O último): [" << cont << "]" << endl;
          cout << "Nome do aluno: " << Nome[cont] << endl;
          cout << "Email do aluno: " << email[cont] << endl;
          cout << "CPF do aluno: " << CPF[cont] << endl;
          cout << "RG do aluno: " << RG[cont] << endl;
          cout << "Telefone do aluno: " << telefone[cont] << endl;
          cout << "Serie do aluno: " << Serie[cont] << endl;
          cout << "Turno do aluno: " << Turno[cont] << endl;
          cout << "                            " << endl;
        }

        break;

      case 6:
        CadFrequencia();

      case 7:
        cout << "Saindo..."
             << "\n"
             << endl;

        break;
        
      default:
        cout << "Número inválido, tente novamente." << endl;
        break;

      } // encerra o switch

    } while (opcao != 7); // encerra o while

  }; // encerra o void

};  // encerra o class



void menuprincipaldepoisdoprimeirocadastro(){

     int CodAcesso;
  
  int Codadmin = 123;
  string Login2;
  string Login3 = "Admin";
  Aluno Estudante;
 
  
 do{
     cout<<"Digite:"<<endl;
  cout<<"1 - Acessar sistema."<<endl;
  cout<<"0 - Sair."<<endl;
  cin>>G;
    
    switch(G){
    case 0:
    break;
      break;

    case 1:
cout<<"Digite o login: "<<endl;
      cin>>Login2;
      
cout<<"Digite a senha de acesso do administrador: "<<endl;
  cin>>CodAcesso;

      if (CodAcesso == CodSenha && Login2 == Login1 || Login2 == Login3 || CodAcesso == Codadmin){
  Estudante.CadAluno();
    }
else{cout<<"Senha ou usuário não coincidem"<<endl;}
      break;

      default: cout<<"Número digitado não bate com nenhuma das opções. "<<endl;
      break;
      }
    
  
    }while(G != 0);
}
  

int main(){
  int CodAcesso;
  string tecla;
  int Codadmin = 123;
  string name;
  string Login2;
  string Login3 = "Admin";
  Aluno Estudante;
  cout<<"Olá, eu sou seu assistente virtual, mas pode me chamar de Diego, qual seria seu nome?"<<endl;
  cin>>name;
  cout<<"                     "<<endl;

  cout<<"Olá, " <<name<< ", eu irei te ajudar a dar os primeiros passos nesse sistema, para começar, você deve cadastrar um login de usuário e um cadastro de senha, cadastre quantos logins desejar, porém lembre-se, "<<name<<", é muito importante que você não se esqueça desse login e nem de sua senha, tudo bem? Para a própria segurança das informações de seus alunos. Bom, com isso dito, só queria avisá-lo que temos um manual de instruções completo pra esse sistema, tudo bem? Boa sorte."<<endl;
  cout<<"Digite qualquer caractere para continuar: "<<endl;
  cin>>tecla;
  
  do{
     cout<<"Digite: "<<endl;
  cout<<"1 - Cadastrar usuario e senha."<<endl;
  cout<<"2 - Acessar sistema."<<endl;
  cout<<"0 - Sair."<<endl;
  cin>>G;
    
    switch(G){
    case 0:
    break;
    
    case 1:
  cout<<"Digite o nome do adm: "<<endl;
  cin>>Login1;
  cout<<"Cadastre a senha: "<<endl;
  cin>>CodSenha;
  cout<<"Senha e Login cadastrados. "<<endl;
     
      break;

    case 2:
cout<<"Digite o login: "<<endl;
      cin>>Login2;
      
cout<<"Digite a senha de acesso do administrador: "<<endl;
  cin>>CodAcesso;

      if (CodAcesso == CodSenha && Login2 == Login1 || Login2 == Login3 || CodAcesso == Codadmin){
        
  Estudante.CadAluno();

menuprincipaldepoisdoprimeirocadastro();

        
        
     }
        
else{cout<<"Senha ou usuário não coincidem"<<endl;}
      break;

      default: cout<<"Número digitado não bate com nenhuma das opções. "<<endl;
      break;
      }
    }while(G != 0);

  cout << "Obrigado por usar nosso programa, ainda estamos em fase de desenvolvimento, voce fez parte disso, tenha uma otima noite :)."
       << endl;

  return 0;
};


/*Dica switch(opcao){
  case 0:
  break;//Não precisa ter nada dentro do 0.

  case 1:
    int contador_cadastros, id_usuario = 0;
  cout<<"qual o seu nome?"<<"\n";
  cin>>nome[id_usuario];
  cout<<"qual o seu CPF?"<<"\n";
  cin>>cpf[id_usuario];
  cout<<"qual o seu telefone?"<<"\n";
  cin>>telefone[id_usuario];
  cout<<"qual a sua idade?"<<"\n";
  cin>>idade[id_usuario];

  contador_cadastros ++;
  id_usuario ++;


 int cont_usu;
    for(cont_usu=0; cont_usu <= cont_cad_usu; cont_usu++)
    {
    cout<<"Nome do usuário: "<<nome_usu[cont_usu]<<endl;
    cout<<"CPF do usuário: "<<cpf[cont_usu]<<endl;
    cout<<"Telefone do usuário: "<<telefone_usu[cont_usu]<<endl;
    cout<<"Idade do usuário:"<<idade_usu[cont_usu]<<endl;
    cout<<"                       "<<endl;
      }
    break;}

void cadastrar(){ //fo
  int opcao;
  int cont_cad_usu;
  int cont_cad_rest;
  int id_usuario = 0;
  int id_restaurante = 0;




 Backup:  cout<<"Digite o código da matricula do aluno."<<endl;
    cin>>codMatricula;
 cout << "Digite o nome completo do aluno (Tudo junto): " << endl;
  cin>>Nome[i];
 cout << "Digite o email do aluno: " << endl;
  cin >> email[i];
 cout << "Digite o CPF do aluno:" << endl;
  cin >> CPF[i];
 cout << "Digite o RG do aluno:" << endl;
  cin >> RG[i];
 cout << "Digite o telefone de " << Nome[i] << endl;
  cin >> telefone[i];

*/