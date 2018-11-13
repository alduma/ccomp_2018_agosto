#include "PolygonArray.h"

PolygonArray::PolygonArray()
{
    size=0;
    polygons= new Polygon[0];
}

PolygonArray::PolygonArray(const Polygon x[],const int y){
    size = y ;
    polygons = new Polygon [y];
    for ( int i = 0; i < y ; ++ i ) {
    polygons [ i ] = x [ i ];
    }

}

PolygonArray::PolygonArray(const PolygonArray &o){
    size = o.size ;
    polygons = new Polygon [size];
    for ( int i = 0; i < size ; i ++) {
    polygons [ i ] = o.polygons [ i ];
    }
}

PolygonArray::~PolygonArray()
{
    delete []polygons;
}

void PolygonArray::redimensionar(int n){
    Polygon * pts = new Polygon [n ];
    int mins = ( n > size ? size : n ) ;
    for ( int i = 0; i < mins ; i ++)
    pts [ i ] = polygons [ i ];
    delete [] polygons ;
    size = n ;
    polygons = pts ;
}

void PolygonArray :: insertar_atras ( const Polygon & p ) {
redimensionar ( size + 1) ;
polygons [ size - 1] = p ;
}

void PolygonArray::insertar_anywhere(const int posicion , const Polygon & p){
    redimensionar( size + 1) ;
    for ( int i = size - 1; i > posicion ; i--) {
    polygons[ i ] = polygons [i -1];
    }
    polygons [ posicion ] = p ;
}

void PolygonArray::remover(const int posicion){
    if ( posicion >= 0 && posicion < size ) {
        for ( int i = posicion ; i < size - 2; i++) {
        polygons [ i ] = polygons [ i + 1];
        }
    redimensionar( size - 1) ;
}
}

