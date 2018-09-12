#include <iostream>

using namespace std;

int main()
{
int a,x=0,y=1,z=0,i;
cin>>a;
    for(i=1;i<=a;i++) {
    z=y;
    y=y+x;
    if(i<=a-1){
            cout<<y<<" , ";
    }
    else{
        cout<<y;
    }

    x=z;
}
}
