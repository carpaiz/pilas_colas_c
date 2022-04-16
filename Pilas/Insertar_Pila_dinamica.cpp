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
	int valor=0,contar=0;
	
	char s;
	
	do{ 
	contar+=1;
	cout<<"Ingrese valor ["<<contar<<"]: ";
	cin>>valor;
	Push(pila,valor);
		cout<<"Valor nuevo (s/n): ";
		cin>>s;
	}while((s == 's'));
	
	
	
	cout<<"---------------------- peek: "<<pila->valor<<endl;
	
	do{ 
	cout<<"Desea sacar un valor (s/n): ";
	cin>>s;
	if (s=='s'){
	Pop(pila);
	if (pila==NULL){
		cout<<"La pila esta vacia"<<endl;
		s='n';
	}
	else{
		cout<<"---------------------- peek: "<<pila->valor<<endl;
	}
	}
	
	
	}while((s == 's'));
	
	
	
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
	int v=NULL;
	Nodo *pop = pila;
	v = pop->valor;
	pila = pop->siguiente;
		/*if(pila == NULL){
		}*/
	delete pop;
}
