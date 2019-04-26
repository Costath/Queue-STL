/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Agosto/2017

*/

#include "biblioteca.h"

using namespace std;

queue<int> Queue;

void Push(int element){
	
	Queue.push(element);
	
}

int Pop(){
	int retirado;
	
	retirado = Queue.front();
	
	Queue.pop();
	
	return retirado;
}

int Size(){
	
	return Queue.size();
}

bool isEmpty(){

	return Queue.empty();
}

int Front(){
		
	return Queue.front();
}







