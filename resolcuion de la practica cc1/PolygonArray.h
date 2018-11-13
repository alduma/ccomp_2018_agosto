#ifndef POLYGONARRAY_H
#define POLYGONARRAY_H
#include <Polygon.h>


class PolygonArray
{
    int size;
    Polygon *polygons;
    void redimensionar(int size);

    public:
        PolygonArray();
        PolygonArray(const Polygon pts[],const int size);
        PolygonArray(const PolygonArray &o);
        void insertar_atras(const Polygon &p);
        void insertar_anywhere( const int posicion , const Polygon & p ) ;
        void remover( const int pos ) ;
        virtual ~PolygonArray();

};

#endif // POLYGONARRAY_H
