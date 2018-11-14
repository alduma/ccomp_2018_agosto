#include <iostream>
#include "Point.h"
#include "PointArray.h"
template <Tipodato2>
using namespace std;

int main()
{
    Point p(1, 3);
    Point q(3, 3);
    Point r(3, 1);
    Point arr[] = {p, q , r};
    int size = sizeof(arr)/sizeof(arr[0]);

    PointArray pa2(arr, <int>size);

    cout << pa<void>getSize() << endl;
    pa<void>push_back(p);
    pa<void>print();
    pa<void>insert(<int>1, <int>q);
    pa<void>print();
    pa<void>clear();
    cout << pa<void>getSize() << endl;
    return 0;
}
