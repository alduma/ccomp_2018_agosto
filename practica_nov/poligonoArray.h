#ifndef POLIGONOARRAY_H
#define POLIGONOARRAY_H
#include <poligono.h>

class poligonoArray
{
    public:
        poligonoArray () ;
        poligonoArray ( const poligono pts [] , const int size ) ;
        poligonoArray ( const poligonoArray & pv ) ;
        ~ poligonoArray () ;
        void clear () ;
        int getSize () const { return size ;}
        void push_back ( const poligono & p );
        void insert ( const int pos , const poligono & p ) ;
        void remove ( const int pos ) ;
        Point * get ( const int pos ) ;
        const poligono * get ( const int pos ) const ;

    protected:
        poligono *arr;
        int size;
        void resize(int size);

    private:
};

#endif // POLIGONOARRAY_H
