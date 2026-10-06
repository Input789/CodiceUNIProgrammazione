#include <iostream>

using namespace std;

void calcoli_matematici(int x, int y){
    int c1 = 0;
    int c2 = 0;

    c1 = x*x;

    c1+= y*y;

    c2 = x*x;
    
    c2 *= y;

    cout<<c1<<" "<<c2;
}

int main(){
    int x = 0;
    int y = 0;

    cin>>x>>y;

    calcoli_matematici(x, y);


    return 0;
}