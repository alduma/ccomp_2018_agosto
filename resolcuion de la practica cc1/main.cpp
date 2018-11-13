#include <iostream>
#include <Polygon.h>
#include<PolygonArray.h>
using namespace std;

int main()
{
    /*rectangle x(5,5);
    triangle y(5,4);
    circle z(5);
    cout<<x.area()<<endl;
    cout<<y.area()<<endl;
    cout<<z.area()<<endl;*/
    Polygon d(4,3);
    Polygon e(2,3);
    Polygon q(3,3);
    Polygon arr[]={d,e,q};
    int size=sizeof(arr)/sizeof(arr[0]);
    PolygonArray pa(arr,size);
    return 0;
}
