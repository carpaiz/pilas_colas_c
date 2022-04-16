#include<iostream>
#include <stdlib.h> 
#include <string.h> 
using namespace std;

struct Nodo{
	int valor;
	Nodo *siguiente;
};

void Add(Nodo *&,int); 
void Remove(Nodo *&);
Nodo *fin=NULL;
int main(){
	Nodo *inicio=NULL;
	int valor=0,contar=0;
	char s;
	
	do{ 
	contar+=1;
	cout<<"Ingrese valor ["<<contar<<"]: ";
	cin>>valor;
	Add(inicio,valor);
	cout<<"Valor nuevo (s/n): ";
		cin>>s;
	}while((s == 's'));
	
	cout<<"--------------- inicio: "<<inicio->valor<<endl;
	cout<<"--------------- fin: "<<fin->valor<<endl;
	cout<<"---------------------------------------------"<<endl;
	
	do{ 
	cout<<"Desea sacar un valor (s/n): ";
	cin>>s;
	if (s=='s'){
	Remove(inicio);
	if (inicio==NULL){
		cout<<"La Cola esta vacia"<<endl;
		s='n';
	}
	else{
		cout<<"--------------- inicio: "<<inicio->valor<<endl;
		cout<<"--------------- fin: "<<fin->valor<<endl;
	}
	}
	
	
	}while((s == 's'));
	
	system("PAUSE");
	return 0;
	
}

void Add(Nodo *&inicio,int v){
	Nodo *add = new Nodo();
	add->valor = v;
	add->siguiente = NULL;
	if (inicio== NULL){
		inicio = add;
	}else{
		fin->siguiente=add;
	}
	fin = add;
}
void Remove(Nodo *&inicio){
	int v;
	Nodo *fin=NULL;
	v = inicio->valor;
	Nodo *cola = inicio;
	
	if(inicio == fin){
		inicio = NULL;
		fin = NULL;
	}
	else{
		inicio = inicio->siguiente;
	}
	delete cola;
}

