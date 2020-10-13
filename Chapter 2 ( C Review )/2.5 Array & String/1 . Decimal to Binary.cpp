#include <iostream>
using namespace std ;
int main(){
    string binaryNumber="" ;
    int x = 55 ;


    while(1){
        if(x/2==0){
            binaryNumber = binaryNumber+char('0'+(x%2));
            break ;
        }
        binaryNumber = binaryNumber+char('0'+(x%2));
        x = x/2 ;
    }
    int i ;
    for(i = binaryNumber.length();i>=0;i--){
        cout<<binaryNumber[i];
    }

    return 0;
}
