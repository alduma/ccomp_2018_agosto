#include "poligonoArray.h"

poligonoArray :: poligonoArray () {
size = 0;
arr = new poligono [0]; // Allows deleting later
}


poligonoArray :: poligonoArray ( const poligono ptsToCopy [] , const int toCopySize
) {
size = toCopySize ;
arr = new poligono [ toCopySize ];
for ( int i = 0; i < toCopySize ; ++ i ) {
arr [ i ] = ptsToCopy [ i ];
}
}


poligonoArray :: poligonoArray ( const poligonoArray & other ) {
size = other . size ;
arr = new poligono [ size ];
for ( int i = 0; i < size ; i ++) {
arr [ i ] = other . arr [ i ];
}
}


poligonoArray ::~ poligonoArray () {
delete [] arr ;
}


void poligonoArray :: resize ( int newSize ) {
poligono * pts = new poligono [ newSize ];
int minSize = ( newSize > size ? size : newSize ) ;
for ( int i = 0; i < minSize ; i ++)
pts [ i ] = arr [ i ];
delete [] arr ;
size = newSize ;
arr = pts ;
}


void poligonoArray :: clear () {
resize (0) ;
}


void poligonoArray :: push_back ( const poligono & p ) {
resize ( size + 1) ;
arr [ size - 1] = p ;
// Could also just use insert ( size , p ) ;
}


void poligonoArray :: insert ( const int pos , const Point & p ) {
resize ( size + 1) ;
for ( int i = size - 1; i > pos ; i - -) {
arr [ i ] = arr [i -1];
}
arr [ pos ] = p ;
}


void poligonoArray :: remove ( const int pos ) {
if ( pos >= 0 && pos < size ) { // pos < size implies size > 0
// Shift everything over to the left
for ( int i = pos ; i < size - 2; i ++) {
arr [ i ] = arr [ i + 1];
}
resize ( size - 1) ;
}
}


Point * poligonoArray :: get ( const int pos ) {
return pos >= 0 && pos < size ? arr + pos : NULL ;
}
const poligono * PointArray :: get ( const int pos ) const {
return pos >= 0 && pos < size ? arr + pos : NULL ;
}
