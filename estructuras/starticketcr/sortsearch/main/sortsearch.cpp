#include <string>
#include <iostream>

#include "../search/ISearch.h"
#include "../search/Interpolation.h"
#include "../sort/ISort.h"
#include "../../dobleenlazada/List.h"


using namespace std;

int main() {
    cout << "probando sorting y search de los diversos algoritmos con polimorfismo" << endl;
    List<ISort> *algoritmosDeSort = new List<ISort>();
    List<ISearch> *algoritmosDeSearch = new List<ISearch>();
    List<int> *listNumbers = new List<int>();

    int numbers[] = {1,49000,49200,49250,49300,49500,49600,49650,49750,49800,49900,
    50000,51000,52000,53000,54000,55000,112233};
    for (int number : numbers) {
        int* ptrNum = new int(number);
        listNumbers->add(ptrNum);
    }
    /* listNumbers->add(&numbers[0]);
    listNumbers->add(&numbers[1]);
    listNumbers->add(&numbers[2]);
    listNumbers->add(&numbers[3]);
    listNumbers->add(&numbers[4]);
    listNumbers->add(&numbers[5]);
    listNumbers->add(&numbers[6]); */


    Interpolation* interpolation = new Interpolation();
    cout << "\nSearch: " << interpolation->search(listNumbers, 49600);
    

    // TODO:
    //  a) Previo al cambio de 'hi!=low', 10 era hallado correctamente
    //  b) Probar interpolation con un numero que no este en lista
    //  c) Probar con una lista que contiene 2 elementos solamente
    //  d) Probar con una lista nula

    /* // cargar las listas con sus algoritmos
    
    // seleccionar un algoritmo de sort aleatorio y lo ejecuto
    int selectedSort = rand() % 3;
    ISort *sortAlg = algoritmosDeSort->find(selectedSort);
    listNumbers = sortAlg->sort(listNumbers);

    // imprimo la lista ordenada
    int *value = 0;
    
    listNumbers->resetSearch();
    value = listNumbers->next();
    while (value!=NULL) {
        cout << *value << endl;
        value = listNumbers->next();
    } 

    // selecciono un algoritmo de search aleatorio y lo ejecuto
    int selectedSearch = rand() % 2;
    ISearch *searchAlg = algoritmosDeSearch->find(selectedSearch);
   
    cout << searchAlg->search(listNumbers, 22) << endl;
    cout << searchAlg->search(listNumbers, 200) << endl; */
}