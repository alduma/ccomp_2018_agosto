# include  <iostream>

using  namespace  std ;

int  main ()
{
    int x,y;
    cin>>x>>y;
    (x%2)&&(y%2)? cout<<" no son multiplos de 2 " : cout<<"son multiplos de 2 ";
    cout<<"\n";
    x%y? cout<< x <<" no es multiplo de  " << y  : cout<< x <<" es multiplo de " << y ;
    cout<<"\n";
    y==x*x? cout<< x <<" es el cuadrado de  " << y  : cout<< x <<" no es el cuadrado de  " << y ;
    return  0 ;
}
