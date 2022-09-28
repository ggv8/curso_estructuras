#include <string>
#include <iostream>

#include "../search/ISearch.h"
// #include "../search/Interpolation_Q9.h"
#include "../sort/ISort.h"
#include "../../dobleenlazada/List.h"
#include "../search/BinarySearch.h"
#include "../search/InterpolationV2.h"
#include "../sort/BubbleSort.h"
#include "../sort/InsertionSort.h"
#include "../sort/SelectionSort.h"


using namespace std;

int main() {
    cout << "probando sorting y search de los diversos algoritmos con polimorfismo" << endl;
    List<ISort> *algoritmosDeSort = new List<ISort>();
    List<ISearch> *algoritmosDeSearch = new List<ISearch>();
    List<int> *listNumbers = new List<int>();

    int numbers[] = {56, 44, 33, 30, 28, 25, 10}; //10,25,28,30,33,44,56
    listNumbers->add(&numbers[0]);
    listNumbers->add(&numbers[1]);
    listNumbers->add(&numbers[2]);
    listNumbers->add(&numbers[3]);
    listNumbers->add(&numbers[4]);
    listNumbers->add(&numbers[5]);
    listNumbers->add(&numbers[6]);

    // cargar las listas con sus algoritmos
    algoritmosDeSort->add(new Bubble());
    algoritmosDeSort->add(new InsertionSort());
    algoritmosDeSort->add(new SelectionSort());

    //algoritmosDeSearch->add(new BinarySearch());
    algoritmosDeSearch->add(new Interpolation());
    
    // seleccionar un algoritmo de sort aleatorio y lo ejecuto
    int selectedSort = 2;//rand() % 3;
    ISort *sortAlg = algoritmosDeSort->find(selectedSort);
    listNumbers = sortAlg->sort(listNumbers);
    // cout << "Algoritmo " << sortAlg->getName() << " comparaciones " << sortAlg->getComparisions() << " Intercambios " << sortAlg->getInterchanges() << endl;

    // imprimo la lista ordenada
    int *value = 0;
    
    listNumbers->resetSearch();
    value = listNumbers->next();
    while (value!=NULL) {
        cout << *value << endl;
        value = listNumbers->next();
    }

    // selecciono un algoritmo de search aleatorio y lo ejecuto
    int selectedSearch = 0;//rand() % 2;
    ISearch *searchAlg = algoritmosDeSearch->find(selectedSearch);

    cout << "\nSearch Algorithm: " << searchAlg->getName() << endl;

    cout << "Result: " << searchAlg->search(listNumbers, 10) << endl;
    cout << "Comparaciones " << searchAlg->getComparisions() << "\n\n";

    cout << "Result: " << searchAlg->search(listNumbers, 56) << endl;
    cout << "Comparaciones " << searchAlg->getComparisions() << "\n\n";

    cout << "Result: " << searchAlg->search(listNumbers, 33) << endl;
    cout << "Comparaciones " << searchAlg->getComparisions() << "\n\n";

    cout << "Result: " << searchAlg->search(listNumbers, 200) << endl;
    cout << "Comparaciones " << searchAlg->getComparisions() << "\n\n";

/* 
    int notfoundNums[56 - 16];
    int index = 0;
    for (int count = 56 - 10, num = 11; count > 1; count--, num++) {
        
        if (num == 25 || num == 28 || num == 30 || num == 33 || num == 44) {
            continue;
        } else {
            notfoundNums[index++] = num;
        }
    }

    for (int n : notfoundNums) {
        cout << "Search " << n << endl;
        cout << "Index: " << searchAlg->search(listNumbers, n) << endl;
        cout << "Algoritmo " << searchAlg->getName() << " comparaciones " << searchAlg->getComparisions() << "\n\n";
    }
 */
}