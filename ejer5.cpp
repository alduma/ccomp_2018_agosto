#include <iostream>

using namespace std;

int main()
{
    int x,c=0;
    cin>>x;
    for(int i=1;i<x+1;i++){
        if(x%i==0){
            c++;
        }
        }
    c==2 ? cout<<"es primo":cout<<"no es primo";
    return 0;
}
