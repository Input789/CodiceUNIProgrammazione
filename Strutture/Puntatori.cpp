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

void ordina (int n[], int len){

    for (int i = 0; i<len - 1; i++){
        for (int j = 0; j < len - i - 1; j++){
            if (n[j] > n[j+1]){
                scambia(n[j], n[j+1]);
            }
        }
    }
}

#define len 4

int main(){
    int n[len];

    n[0] = 1;
    n[1] = 3;
    n[2] = 2;
    n[3] = 4;

    ordina(n, len);

    for (int i = 0; i<len; i++)cout<<n[i]<<" ";
    cout<<endl;



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