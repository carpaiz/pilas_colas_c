#include<iostream>
#include <stdlib.h> 
#include <string.h> 
using namespace std;

struct Nodo{
	int valor;
	Nodo *siguiente;
};

void Push(Nodo *&,int); 
void Pop(Nodo *&);
int main(){
	Nodo *pila=NULL;
	int valor1,valor2,valor3;
	cout<<"Ingrese valor 1:";
	cin>>valor1;
	Push(pila,valor1);
	
	cout<<"Ingrese valor 2:";
	cin>>valor2;
	Push(pila,valor2);
	
	cout<<"Ingrese valor 3:";
	cin>>valor3;
	Push(pila,valor3);
	
	cout<<"peek: "<<pila->valor<<endl;
	Pop(pila);
	cout<<"peek: "<<pila->valor<<endl;
	Pop(pila);
	cout<<"peek: "<<pila->valor;
	
	system("PAUSE");
	return 0;
	
}

void Push(Nodo *&pila,int v){
	Nodo *push = new Nodo();
	push->valor = v;
	push->siguiente = pila;
	pila = push;
}
void Pop(Nodo *&pila){
	int v;
	Nodo *pop = pila;
	v = pop->valor;
	pila = pop->siguiente;
	delete pop;
}
