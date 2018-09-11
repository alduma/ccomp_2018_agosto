#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    (x % 4 == 0 && x % 100 != 0 || x% 400 == 0)? cout<<"es bisiesto":cout<<"no es bisiesto";
    return 0;
}
