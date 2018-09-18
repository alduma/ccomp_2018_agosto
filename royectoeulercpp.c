#include <iostream>

using namespace std;
int problema1(int x);
int problema2(int x);
long int problema3( long int num);
int problema4();
int problema5();
int problema6(int x);
int problema7(int x);
int problema9();
int problema10(int n);
int main()
{
    cout <<problema1(1000)  << endl;
    //cout <<problema2(4000000)  << endl;
    //cout <<problema3(600851475143)  << endl;
    //cout <<problema4()  << endl;
    //cout <<problema5()  << endl;
    //cout <<problema6(100)  << endl;
    //cout <<problema7(1001)  << endl;
    //cout <<problema9()  << endl;
    //cout <<problema10(2000000)  << endl;

    return 0;
}
//suma multiplos de 3y5
int problema1(int x){
    int v=0;
    for(int i=0;i<x;i++){
        if((i%3==0)or(i%5==0)){
            v=v+i;
            }
        }
        return v;
}
//numero fibonacci pares
int problema2(int x){
    int z=1;
int t=2;
int l;
int s=0   ;
while (t<=x){
    if (t%2==0){

        s+=t;
        }
    l=t;
    t=t+z;
    z=l;
    }
    return s;
    }

//factor primo mas grande
long int problema3(long int num){
    long int n=2;

    while(num!=1){
        if(num%n==0){
            cout<<n<<",";
            num=num/n;
        }
        else{
        n++;
        }

       }
       cout<<"el mayor es : ";
       return n;

}
//producto palindromo mas grande
int problema4(){
    int i=100,x=1,a,b,c;
    while(i<=999){
        i=i*(i+1);
        a=i/100%10;
        b=i%10%10;
        c=i%10;
        i++;
        a++;
        b++;
        c++;
        if(a==c){
            cout<<i<<",";

        }


    }
}

//multiplo mas pequeño
int problema5(){
    int i=0,c=1,v=0,j;
    for(;i<1000;i++){
        for(j=1;j<=20;j++){
            if(i%j==0){
                v++;
            }

        }
    }
    if(v==j){
            cout<<i;
            }
}

//suma diferencia cuadrada
int problema6(int x){
    int v,f,c=0,d=0,e;
    for(int i=1;i<=x;i++){
        v=i*i;
        c=c+v;
    }
    for(int j=1;j<=x;j++){
        d=d+j;
    }
    e=d*d;
    f=e-c;
    return f;

}
//1001 primo
int problema7(int num){
   int  n, p, i, num_columnas;
    num_columnas = 0 ;
    n = 2;
    i = 1;
    while(i <= num)
    {
        for(p = 2; n % p != 0; p++);
        if(p == n)
        {
            cout << n <<", ";
            if(++num_columnas % 10 == 0)
                cout << "\n" << endl;
            i++;
        }
        n++;
    }
    cout<<"el primo 1001 es:";
    return n-1;


}
//teorema de pitagoras
int problema9(){
    int a=1,b=2,c=3,sum = 0;

    for(a = 1; a <= 1000;a++)
    {
        for(b = 2; b <= 1000;b++)
        {
            for(c = 3; c <= 1000;c++)
            {
                if(a*a + b*b == c*c && a + b + c == 1000)
                {
                    cout<<a<<","<<b<<","<<c;
                    sum = a * b * c;
                    cout<<"\n";
                    a++;
                    b++;
                    c++;
                }
            }
        }
    }
    return sum;
}
//suma de n numeros primos
int problema10(int n){
    int num,x,cont=0,b=0;

    for(num=2;num<=n;num++){
        for(x=2;x<=num;x++){
                if(num%x==0){
                    cont++;
                }

        }
        if(cont==1){

            b=b+num;

        }
        cont=0;
    }
    return b;

}
