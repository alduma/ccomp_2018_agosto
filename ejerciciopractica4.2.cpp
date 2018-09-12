#include <iostream>

using namespace std;

int main()
{
    int b;
    int x,n=0;
    cin>>x;
    while(n<=x){
        for(int i=2;i<=1000000;i++){
        b=0;
        for(int j=1;j<=int(i/2);j++){
            if(i%j==0){
                b=b+j;
            }
        }
        if(b==i){
            cout<<i<<" , ";
        }
    }
    n++;
    }

    return 0;
}
