#include <iostream>
#include <iomanip> //biblioteca utilizada para formatação das casas decimais.
using namespace std;
 //Declaração de protótipos para a identificação e inicialização das funções.
 double Registro (int quantAtletas);
 double media (double a[], int A);
 int aptos (int aptos);
 void aptos();
 void relacao (double Alturas[], int quantAtletas);
 int corte (double altura[], int quant);
 void organizador();
 void dadosCompeticao();
 
 int main(){		//Main:
	cout<<"----------------- COMPETICAO DE SALTO ------------------\n";
	dadosCompeticao();
	cout<<"\n\n";
	cout<<"\nQuantos atletas vao participar: ";
	int Atletas;
	cin>> Atletas;
	
	cout<<"\n\n";
	organizador();
    Registro(Atletas);
    
    cout<<"\n\n";
	organizador();
	
	system("pause");
	return 0;	
}
 
 double Registro (int quantAtletas) {		//Função para registrar as Alturas dos candidatos para a competição.
 	cout<<"        --Registrando altura do(s) atleta(s)-- \n";
    double Alturas[quantAtletas];
	for(int x=0; x<quantAtletas; x++){
	cout<<"\nAltura atleta " << x+1 << ": ";
	cin>>Alturas[x];}
	
	cout<<"\n\n       --Media altura atleta(s) registrado(s)-- \n\n";
	cout<<"Quantidade de atletas: "<< quantAtletas << "\t"<<"Altura media: " << setprecision(3) << media(Alturas, quantAtletas) << "m\n";
	
    relacao(Alturas, quantAtletas);		
}
	
 void relacao (double Alturas[], int quantAtletas){     //Função para mostrar a relação dos atletas registrados.
 	cout<<"\n\n       --Relacao do(s) atleta(s) registrado(s)-- \n";
 	int aptos = 0;
 	double altAptos = 0;
 	for(int x=0; x<quantAtletas; x++){
		cout<<"\nAtleta "<< x+1 << "\tAltura: " <<  Alturas[x] <<"m";
		if (Alturas[x] >= 1.50){
			cout<<"\t\tApto";
			aptos++;
			altAptos = altAptos+Alturas[x];									
		} else {
			cout<<"\t\tInapto";
		}
 	}
 	 
    cout<<"\n\n";
	organizador();
	cout<<"       --Atletas(s) apto(s) para participar-- \n\n";
	cout<< "Quantidade APTOS: " << aptos << "\t\t Altura Media APTOS: " << setprecision(3) << altAptos/aptos << "m\n";
}
	
 double media (double alturas[], int quantAtletas){     //Função para fazer a média de todas as alturas registradas.	
	double soma = 0;
	for(int x=0; x<quantAtletas; x++){
		soma+=alturas[x];
	}
	
	return soma/quantAtletas;
}
 
 void organizador(){    //Função void para organizaçõo, separação dos tópicos.
	for (int x=1; x<=56; x++){
	cout<<"-";
	}
	cout<<"\n";			
}

 void dadosCompeticao(){   //Função void para organizaçõo, informando requisito da competição.
	cout<<"\t     REQUISITO UNICO DA COMPETICAO\n";
	cout<<"\t\t Medir mais que 1.50m";
}
