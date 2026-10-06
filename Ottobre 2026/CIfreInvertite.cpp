#include <iostream>

using namespace std;


int n = 0;

void inverti (){
    int inversione = 0;

    cin>>n;

   while (n>0){
    inversione = inversione * 10 +  n % 10;
    n/= 10;
   }

    cout<<inversione;

}

int main(){
    
    inverti();



    return 0;
}