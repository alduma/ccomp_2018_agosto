#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
    public:
        Polygon(int a=0,int b=0){
            widht=a;
            hight=b;
        }
        int area(void);
        void printarea();

    protected:
        int widht,hight;

};

#endif // POLYGON_H

/*class rectangle:public Polygon{
    public:
        rectangle(int lado,int ancho){
            widht=lado;
            hight=ancho;
        }

        int area(void){
            return widht*hight;
        }
};

class triangle:public Polygon{
    public:
        triangle(int base,int altura){
            widht=base;
            hight=altura;
        }

        int area(void){
            return (widht*hight)/2;
        }
};

class circle{
    public:
        circle(int radio=0){
            r=radio;
        }
        int area(void){
            return pi*(r*r);
        }
    protected:
        float pi=3.1416;
        int r;
};*/
