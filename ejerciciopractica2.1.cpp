#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int a=1;a<=x;a++){
        if(a%2!=0){
            if(a<=x-2){
            cout<<a<<",";
        }
        else{
            cout<<a;
        }
        }
    }
}
