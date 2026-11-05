#include <iostream>

using namespace std;

struct campi{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
};

void scambia(int &a, int &b){
    int *p1;
    int *p2;

    p1 = &a;
    p2 = &b;

    int tmp = *p1; //tmp = a
    *p1 = *p2; //a = b
    *p2 = tmp; //b = tmp

}

int main(){
    int *p;

    int a = 4;
    int b = 3;

    campi c;

    
    p = &c.n1;
    cin>>*p;
    cout<<c.n1;

    p = &c.n2;
    cin>>*p;
    cout<<c.n2;

    p = &c.n3;
    cin>>*p;
    cout<<c.n3;

    p = &c.n4;
    cin>>*p;
    cout<<c.n4;

    p = &c.n5;
    cin>>*p;
    cout<<c.n5;

    scambia(a, b);

    cout<<" "<<a<<" "<<b;




    return 0;
}