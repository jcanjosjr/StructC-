#include <iostream>
#include <string.h>
#include <iomanip>
#include <conio.h>
#include <stdio.h> // fflush(stdin); gets e do puts
#include <windows.h>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
#include<list>

using namespace std;

  /*Criando a struct */

int clientes = 1;

struct dados_cliente
{
	int id_cliente;
    char nome[100]; //use o gets para ler e puts para imprimir
    int idade;
    char email[254];
    char profissao[50];
    char sexo[50];
	char rua[50];
	char cidade[50];
	int numero_casa;
};


// Criando a Struct de Cliente;

int i, escolha, consultaID;
main()
{
	setlocale(LC_ALL, "Portuguese");
	system("color fc");
	
		
	cout<<"\n\t ---- Cadastro de Clientes. ----";
	do
	{
		cout<<"\n\nInforme a quantidade de Clientes que deseja cadastrar: ";
		cin>>clientes; //definindo clientes entre 1 e 50.
	} while (clientes < 0 || clientes > 50);
	dados_cliente Cliente[clientes];
	for(i=0;i<clientes;i++)
	{
		cout<<"\n\t ---- Cadastro do "<<i+1<<"º Cliente. ----"; //apresentando os dados do cliente.
		cout<<"\n\n\n Nome do Cliente: ";
		fflush(stdin); //Para limpar o buffer em Windows, use o: fflush(stdin)
  		gets(Cliente[i].nome);	
  		cout<<" Idade do Cliente: ";
  		cin>>(Cliente[i].idade);
  		cout<<" Email do Cliente: ";
  		fflush(stdin);
  		gets(Cliente[i].email);
  		cout<<" Profissão do Cliente: ";
  		fflush(stdin);
  		gets(Cliente[i].profissao);
  		cout<<" Informe o sexo do Cliente: ";
  		fflush(stdin);
  		gets(Cliente[i].sexo);
  		cout<<" Informe a Rua do Cliente: ";
  		fflush(stdin);
  		gets(Cliente[i].rua);
  		cout<<" Informe o Número da residência: ";
  		cin>>(Cliente[i].numero_casa);
  		cout<<" Informe a Cidade do Cliente: ";
  		fflush(stdin);
  		gets(Cliente[i].cidade);
  		
  			// Gerando o ID do cliente de forma Random!
		int maior = 50;
 		int menor = 1;
  	 	int sorteio = rand()%(maior-menor+1) + menor;
  		Cliente[i].id_cliente = sorteio;
  		cout<<" O ID do Cliente, gerado automáticamente foi: "<<Cliente[i].id_cliente;
		cout<<"\n\n";
	}
	
do{ //abrindo do while
	cout<<"\n\t ---- Consulta de Clientes Cadastrados ----";
	cout<<"\n\n [1] Apresentar todos os Clientes Cadastrados.";
	cout<<"\n [2] Informe o ID do Cliente que deseja Consultar.";
	cout<<"\n [3] Para sair do Programa.";
	cout<<"\n\n Escolha a consulta que deseja fazer: ";
	cin>>escolha;
	
	switch(escolha) //gerando switch.
	{// abrindo switch
	case 1:{system ("cls");
			cout<<"\n\n Segue dados de todos os Clientes Cadastrados. ";
			for (i=0;i<clientes;i++)
			{
				cout<<"\n-----------------------------------";					
				cout<<"\n ID do Cliente: "<<Cliente[i].id_cliente;
				cout<<"\n Nome do Cliente: "<<Cliente[i].nome;
  				cout<<"\n Idade do Cliente: "<<Cliente[i].idade;
  				cout<<"\n Email do Cliente: "<<Cliente[i].email;  	
  				cout<<"\n Profissão do Cliente: "<<Cliente[i].profissao;
  				cout<<"\n Sexo do Cliente: "<<Cliente[i].sexo;
  				cout<<"\n Rua do Cliente: "<<Cliente[i].rua;
  				cout<<"\n Número da residência: "<<Cliente[i].numero_casa;
  				cout<<"\n Cidade do Cliente: "<<Cliente[i].cidade;
			}
		break;
	}
	
	case 2:{system ("cls");
			cout<<"Por favor, informe o ID do Cliente, para realizarmos a Consulta: ";
			cin>>consultaID;
			for (i=0;i<clientes;i++)
			{
				if (consultaID == Cliente[i].id_cliente)
				{		
					cout<<"\n-----------------------------------";					
					cout<<"\n ID do Cliente: "<<Cliente[i].id_cliente;
					cout<<"\n Nome do Cliente: "<<Cliente[i].nome;
 	 				cout<<"\n Idade do Cliente: "<<Cliente[i].idade;
  					cout<<"\n Email do Cliente: "<<Cliente[i].email;  	
  					cout<<"\n Profissão do Cliente: "<<Cliente[i].profissao;
  					cout<<"\n Sexo do Cliente: "<<Cliente[i].sexo;
  					cout<<"\n Rua do Cliente: "<<Cliente[i].rua;
  					cout<<"\n Número da residência: "<<Cliente[i].numero_casa;
  					cout<<"\n Cidade do Cliente: "<<Cliente[i].cidade;
				}
			}
		break;
	}
} //fechando switch
} while (escolha != 3);
}
