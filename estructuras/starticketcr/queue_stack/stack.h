#include "../generic/List.h"

#ifndef STACK

#define STACK 1

template <class T>
class Stack {
    private:
        List<T>* stackList;

    public:
        Stack() {
            stackList = new List<T>();
        }

        void push(T* pData) {
            stackList->insert(0, pData);
        }

        T* pop() {
            return stackList->remove(0);
        }

        T* top() {
            return stackList->find(0);
        }

        bool isEmpty() {
            return stackList->isEmpty();
        }
};


#endif