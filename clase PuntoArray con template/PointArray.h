#ifndef POINTARRAY_H
#define POINTARRAY_H
template <typename Tipodato2>

#include "Point.h"

class PointArray
{
    public:
        PointArray();
        PointArray(const Point pts[], const Tipodato2 size);
        PointArray(PointArray &o);
        ~PointArray();

        Tipodato2 print();
        Tipodato2 getSize();
	Tipodato2 clear();
	Tipodato2 push_back(const Point &p);
	Tipodato2 insert(const Tipodato2, const Point &p);
	Tipodato2 remove(const Tipodato2);

    private:
        Tipodato2 size;
        Point *points;
	Tipodato2 resize(int);
};

#endif // POINTARRAY_H
