#include <iostream>

using namespace std;

template < class T>

class Minimo{

        T t1;
        T t2;
    public:
        Minimo(T n1,T n2){t1=n1;t2=n2;};
        T menor();
};


template <class T>
T Minimo <T>::menor()
{
    return t1 < t2 ? t1 : t2; //OPERADOR Condicional: if then else ;si t1 es menor que t2,entonces retunr t1 , de lo contrario return t2
}

int main(){
  Minimo<int>minimo(6,7);
  cout<<minimo.menor();
}
