#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin>>n;
    int numArray[n] ;
    int oneCount = 0 ;
    int maxOne = 0;
    int i ;
    for(i =0 ; i<n ; i++){
        cin>>numArray[i];
    }
    for(i = 0 ; i<n ; i++){
        if(numArray[i]==1){
            oneCount++;
        }
        if(numArray[i]==0){
            if(oneCount>maxOne){
                maxOne =oneCount ;
            }
            oneCount = 0;
        }
    }
    cout<<maxOne;
    return 0;
}
