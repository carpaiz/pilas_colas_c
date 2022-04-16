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
	
	int valor1,valor2,valor3;
	cout<<"Ingrese valor 1:";
	cin>>valor1;
	Add(inicio,valor1);
	
	cout<<"Ingrese valor 2:";
	cin>>valor2;
	Add(inicio,valor2);
	
	cout<<"Ingrese valor 3:";
	cin>>valor3;
	Add(inicio,valor3);
	
	
	cout<<"inicio: "<<inicio->valor<<endl;
	cout<<"fin: "<<fin->valor<<endl;
	Remove(inicio);
	cout<<"inicio: "<<inicio->valor<<endl;
	cout<<"fin: "<<fin->valor<<endl;
	Remove(inicio);
	cout<<"inicio: "<<inicio->valor<<endl;
	cout<<"fin: "<<fin->valor<<endl;
	
	
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

