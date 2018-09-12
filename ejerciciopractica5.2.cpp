#include <iostream>

using namespace std;

int main()
{
    int num,x,cont=0,b=0,n;
    cin>>n;
    for(num=2;num<=n;num++){
        for(x=2;x<=num;x++){
                if(num%x==0){
                    cont++;
                }

        }
        if(cont==1){
            cout<<num<<",";
            b=b+num;

        }
        cont=0;
    }
    cout<<"la suma es:"<<b;


    return 0;
}
