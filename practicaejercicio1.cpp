#include <iostream>

using namespace std;

int main()
{
    int i=1,c=0;
    for(;i<1000;i++){
        if((i%3==0)or(i%5==0)){
           c=c+i;
           }
    }
    cout<<"la suma sera de : "<<c;

    return 0;
}
