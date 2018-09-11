#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int a=0;a<=x;a++){
        if(a<=x-1){
            cout<<a<<",";
        }
        else{
            cout<<a;
        }
    }
}
