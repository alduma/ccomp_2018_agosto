#include "PointArray.h"

PointArray::PointArray()
{
    this->size = 0;
    this->points = new Point[size];
}

PointArray::PointArray(const Point pts[], const int size) {
    this->size = size;
    this->points = new Point[size];
    for(int i = 0; i < size; i++)
        points[i] = pts[i];
}

PointArray::PointArray(PointArray &o){
    this->size = o.size;
    this->points = new Point[size];
    for(int i = 0; i < size; i++)
        points[i] = o.points[i];
}

template<class Tipodato2>
Tipodato2 PointArray <Tipodato2>::resize(Tipodato2 newSize){
	Point *pts = new Point[newSize];
	int minsize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minsize; i++)
        pts[i] = points[i];
	delete[] points;
	size = newSize;
	points = pts;
}

template<class Tipodato2>
Tipodato2 PointArray <Tipodato2>::print(){
	for(int i = 0; i < size; i++)
		points[i].print();
}


template<class Tipodato2>
Tipodato2 PointArray <Tipodato2>::push_back(const Point &p){
	resize(size+1);
	points[size-1] = p;
}


template<class Tipodato2>
Tipodato2 PointArray <Tipodato2>::insert(const Tipodato2 pos,const Point &p){
	resize(size+1);
    for(int i = size-1; i < pos; i--)
        points[i] = points[i-1];
	points[pos] = p;
}


template<class Tipodato2>
Tipodato2 PointArray <Tipodato2>::remove(const Tipodato2 pos){
    if ( pos >= 0 && pos < size ) { // pos < size implies size > 0
        for ( int i = pos ; i < size - 2; i ++) {
            points [ i ] = points [ i + 1];
            }
            resize ( size - 1) ;
        }
}


template<class Tipodato2>
Tipodato2 PointArray <Tipodato2>::clear(){
	resize(0);
}


template<class Tipodato2>
Tipodato2 PointArray <Tipodato2>::getSize(){
    return size;
}

PointArray::~PointArray()
{
    delete[] points;
}
