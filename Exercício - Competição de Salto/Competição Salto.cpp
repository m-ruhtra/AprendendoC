#include <iostream>
#include <iomanip> //biblioteca utilizada para formata��o das casas decimais.
using namespace std;
 //Declara��o de prot�tipos para a identifica��o e inicializa��o das fun��es.
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
 
 double Registro (int quantAtletas) {		//Fun��o para registrar as Alturas dos candidatos para a competi��o.
 	cout<<"        --Registrando altura do(s) atleta(s)-- \n";
    double Alturas[quantAtletas];
	for(int x=0; x<quantAtletas; x++){
	cout<<"\nAltura atleta " << x+1 << ": ";
	cin>>Alturas[x];}
	
	cout<<"\n\n       --Media altura atleta(s) registrado(s)-- \n\n";
	cout<<"Quantidade de atletas: "<< quantAtletas << "\t"<<"Altura media: " << setprecision(3) << media(Alturas, quantAtletas) << "m\n";
	
    relacao(Alturas, quantAtletas);		
}
	
 void relacao (double Alturas[], int quantAtletas){     //Fun��o para mostrar a rela��o dos atletas registrados.
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
	
 double media (double alturas[], int quantAtletas){     //Fun��o para fazer a m�dia de todas as alturas registradas.	
	double soma = 0;
	for(int x=0; x<quantAtletas; x++){
		soma+=alturas[x];
	}
	
	return soma/quantAtletas;
}
 
 void organizador(){    //Fun��o void para organiza��o, separa��o dos t�picos.
	for (int x=1; x<=56; x++){
	cout<<"-";
	}
	cout<<"\n";			
}

 void dadosCompeticao(){   //Fun��o void para organiza��o, informando requisito da competi��o.
	cout<<"\t     REQUISITO UNICO DA COMPETICAO\n";
	cout<<"\t\t Medir mais que 1.50m";
}
