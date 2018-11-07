#ifndef POLIGONO_H
#define POLIGONO_H


class poligono
{
    public:
        poligono(int,int);
        //virtual int area(void)=0;
        //int area(void);
        void printarea();

    protected:
        int weight,hight;

    private:
};

#endif // POLIGONO_H

class rectangulo:public poligono{
    public:
        rectangulo(int,int);
        int area(void);
}
class triangulo:public poligono{
public:
  triangulo(int,int);
  int area(void);
}

class circulo{
public:
  circulo(int);
  int pi=3.1416;
  int area(void);
private:
  int radio;
}
