#include <iostream>

using namespace std;
int suma(const int x[], int tam){
    int f=0;
    for(int i=0;i<tam;i++){
        f=f+x[i];
    }
    return f;
}
int mayor(const int x[],int tam){
    int may=x[0];
    for(int i=0;i<tam;i++){
        if(x[i]>may){
            may=x[i];
        }

    }
    return may;
}
bool primo(int x){
    int c=0;
    for(int i=1;i<x+1;i++){
        if(x%i==0){
            c++;
        }

    }
    if(c!=2){
            return false;
        }
        else{
            return true;
        }
}

int contarprimos(const int x[], int tam){
    int d=0;
    for(int i=0;i<tam;i++){
        if(primo(x[i])==true){
            d++;
        }
    }
    return d;


}
 void ordenar_numeros_ascendiente(int x[], int tam){
        int y;
         for(int i=0;i<tam;i++){
                for(int j=0;j<tam-1;j++){
                    if(x[j]<x[j+1]){
                        y=x[j];
                        x[j]=x[j+1];
                        x[j+1]=y;
                    }
         }
         }
        for(int i=0;i<tam;i++){
            cout<<x[i]<<endl;
                }
 }
  void ordenar_numeros_d(int x[], int tam){
        int y;
         for(int i=0;i<tam;i++){
                for(int j=0;j<tam-1;j++){
                    if(x[j]>x[j+1]){
                        y=x[j];
                        x[j]=x[j+1];
                        x[j+1]=y;
                    }
         }
         }
        for(int i=0;i<tam;i++){
            cout<<x[i]<<endl;
                }
 }
 void invertir2(int x[],int t){
    int temp;
    for(int i=t;i>0;i--){
        temp=x[i];
        x[i]=x[i-1];
        x[i-1]=temp;
        cout<<x[i];
        cout<<"\n";
    }
 }
 //int arra[6]={4,5,9,11,7,6};
   void invertir(int x[], int tam){
        int y;
         for(int i=tam-1;i>=0;i--){

                    cout<<x[i];
                    cout<<"\n";
            }



}
 int longitud(char x[]){
    int c=0;
    for(int i=0;x[i]!='\0';i++){
        c++;
    }
    return c;
 }

 int contar_Caracter(char x[], char b){
    int c=0;
    for(int i=0;x[i]!='\0';x[i++]){
        if(x[i]==b){
            c++;
        }
    }
    return c;
 }


 bool es_palindrome(char x[]) {
       int c=0;
      for(int i=0;x[i]!='\0';x[i++]){
            c++;
        }
      for ( int i = 0; i < c / 2; i++) {
        if (x[i] != x[c - 1 - i]) {
          return false;
        }
      }
      return true;
}
int main(){
    int arra[6]={4,5,9,11,7,6};
    char x[]="hasdfohoh";
    char t='i';
    //cout<<"numero mayor en el arreglo es : ";
    //cout<<mayor(arra,6);
    //cout<<"\n";
    //cout<<"en el arreglo los numeros primos son : ";
    //cout<<contarprimos(arra,6);
    //cout<<"\n";
    //cout<<"arreglo forma ascendiente:";
    //ordenar_numeros_d(arra,6);
    //cout<<"\n";
    //cout<<"arreglo forma descendiente:";
    //ordenar_numeros_ascendiente(arra,6);
    //cout<<"\n";
    //cout<<"el arreglo invertido es : ";*/
    //invertir2(arra,6);
    //cout<<longitud(x);
    //cout<<contar_Caracter(x,t);
    //cout<<es_palindrome(x);
    return 0;
}
