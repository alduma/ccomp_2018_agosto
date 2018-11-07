#include "poligono.h"
#include <iostream>
using namespace std;
poligono::poligono(int a,int b)
{
    hight=a;
    weight=b;
}

void poligono::printarea(){
    cout<<this->area()<<endl;
}

rectangulo::rectangulo(int x, int y):public poligono(int a,int b){
  weight=a;
  hight=b;
}
int rectangulo:area(){
  poligono::area();
  return weight*hight;
}

triangulo::triangulo(int x,int y):poligono(int a,int b){
  weight=x;
  hight=y;
}
int triangulo:area(void){
  return (weight*hight)/2;

}

circulo::circulo(int x){
  radio=x;
}
int circulo:area(){
  return radio*pi;
}
