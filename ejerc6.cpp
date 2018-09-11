#include <iostream>

using namespace std;

int main()
{
    int x,c,d=0;
    bool ez;
    cin>>x;
    for(int i=0;i<x;i++){
        c=0;
        while(c<i){
                if(i%c==0){
                    d=d+i;
                }
                else{
                    c++;
                }

        }
        if(d==i){
                if(i<x-1){
                    cout<<i<<",";
                }
                else{
                    cout<<i;
                }

        }
    }
    return 0;
}
