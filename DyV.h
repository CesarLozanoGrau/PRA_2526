#ifndef DYV_H
#define DYV_H

#include <vector>

using namespace std;

template<typename T>

int BusquedaBinaria(T X, const vector<T>& V, int ini, int fin){
    if(ini > fin){
        return -1;
    }

    int medio = (ini + fin) / 2;

    if(V[medio] == X){
        return medio;
    }else if(V[medio] < X){
        return BusquedaBinaria(X, V, medio + 1, fin);
    }else{
        return BusquedaBinaria(X, V, ini, medio - 1);
    }
}


template<typename T>

int BusquedaBinaria_INV(T X, const vector<T>& V, int ini, int fin){
    if(ini > fin){
        return -1;
    }

    int medio = (ini + fin) / 2;

    if(V[medio] == X){
        return medio;
    }else if(V[medio] > X){
        return BusquedaBinaria_INV(X, V, medio + 1, fin);
    }else{
        return BusquedaBinaria_INV(X, V, ini, medio - 1);
    }
}




#include <iostream>
#include <vector>
using namespace std;


template <typename T>
int BusquedaBinaria(T x, vector<T> v, int ini, int fin){
	int m =(ini+ fin)/2;
	if(x > v[fin]){
		cout <<"El valor no se encuentra en el vector\n";
		return -1;
	}
	if(v[m] == x){//El valor es el que se encuentra en la posición m
	       return m;
	}else if(v[m] > x){//El valor se encontrará entre m y fin
 		return BusquedaBinaria(x, v, m+1, fin);
	}else{
		return BusquedaBinaria(x, v, ini, m-1);
	}
}

template <typename T>

int Partition(vector<T> v, int ini, int fin){
	T x = v[fin];
	int contador = ini;
	for(int i = ini; i < fin; i++){
		if(v[j] <= x){
			i += 1;
		}
	}
	swap(v[i], v[fin]);
	return i;
	
}
template <typename T>
void QuickSort(vector<T> v, int ini, int fin){
	if(ini < fin){
		int ivot = Partition(v, ini, fin);
		QuickSort(v, ini, pivot-1);
		QuickSort(v, pivot + 1, fin);
	}
}


#include "DyV.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	int res = BusquedaBinaria(2, v, 0, 9);
	cout << " " << res << endl;
	int res2 = QuickSort(v, 0, 9);
	cout << " " << res2 <<endl;
	return 0;
}