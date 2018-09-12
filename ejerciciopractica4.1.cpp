#include <iostream>

using namespace std;

int main()
{
    int x,b=0,i=1;
    cin>>x;
    for(;i<x;i++){
        if(x%i==0){
            b=b+i;
        }
    }
    if(b==x){
        cout<<"es perfecto";
    }
    else{
        cout<<"no lo es";
    }
    return 0;
}
