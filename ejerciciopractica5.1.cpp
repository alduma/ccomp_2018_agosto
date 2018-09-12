#include <iostream>

using namespace std;

int main()
{
    int num,x=2,mayor=0;
    cin>>num;
    while(num!=1){
        if(num%x==0){
            cout<<x<<"\n";
            num=num/x;
        }

        else{
            x++;
        }
    }
    cout<<"el mayor es: "<<x;

    return 0;
}
