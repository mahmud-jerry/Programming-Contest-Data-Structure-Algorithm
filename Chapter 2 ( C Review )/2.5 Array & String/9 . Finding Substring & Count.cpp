#include <iostream>
using namespace std ;

int main(){
    string country = "Bangladesh";
    string substring = "desh";
    int count ;
    int tempCount = 0;

    int i , j ,k;

    for(i = 0; i<country.length();i++){
            count = 0;
        for(j = i,k=0 ; k<substring.length();j++,k++){
            if(country[j]!=substring[k]){
                count++;
            }
        }
        if(count==0){
            tempCount++;
        }
    }
    cout<<tempCount;
    return 0;
}
