#include <iostream>
#include <cmath>
using namespace std ;

int main(){
    string binaryNumber ;
    int decimalNumber  = 0 ;
    cin>>binaryNumber ;
    int i , j ;
    for(i = binaryNumber.length()-1 , j= 0; i>=0 ; i--,j++){
        decimalNumber = decimalNumber + (binaryNumber[i]-'0')*pow(2,j);
    }
    cout<<decimalNumber;
    return 0;
}
