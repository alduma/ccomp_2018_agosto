#include <iostream>

using namespace std;

int main()
{
    float x,y,z;
    cin>>x>>y>>z;
    ((x>y)&&(x>z))? cout<<x<<" es el mayor" : ((y>x)&&(y>z))? cout<<y<<" es el mayor" : cout<<z<<" es el mayor";
    cout<<"\n";
    ((x<y)&&(x<z))? cout<<x<<" es el menor" : ((y<x)&&(y<z))? cout<<y<<" es el menor" : cout<<z<<" es el menor";
    cout<<"\n";
    cout<<"el promedio es "<<((x+y+z)/3);
    return 0;
}
