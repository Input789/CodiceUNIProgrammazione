#include <iostream>

using namespace std;

int main(){

    int n1, n2 = 0;
    char c = '.';

    cin>>n1>>n2;

    cin>>c;

    switch (c){
        case 0:
            break;
        case '+':
            cout << n1 + n2<<endl;
            break;
        case '-':
            cout << n1 - n2<<endl;
            break;
        case '*':
            cout<< n1 * n2<<endl;
            break;
        case '/':
            cout<< n1 / n2<<endl;
            break;
        case '%':
            cout<< n1 % n2<<endl;
            break;
    }


    return 0;
}