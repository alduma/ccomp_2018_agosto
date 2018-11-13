#include <iostream>
#include "Point.h"

template<class Tipodato>
Tipodato Point <Tipodato>::print(){
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

template<class Tipodato>
Tipodato Point <Tipodato>::offset(Tipodato nx,Tipodato ny){
    x += nx;
    y += ny;
}

template<class Tipodato>
Tipodato Point <Tipodato>::getX()
{
    return x;
}

template<class Tipodato>
Tipodato Point <Tipodato>::getY()
{
    return y;
}

template<class Tipodato>
Tipodato Point <Tipodato>::setX(Tipodato x){
    this->x=x;
}

template<class Tipodato>
Tipodato Point <Tipodato>::setY(Tipodato y){
    this->y=y;
}

