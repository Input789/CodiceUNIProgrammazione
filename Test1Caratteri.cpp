#include <iostream>

using namespace std;

int main(){
    char c = '.';

    cin>>c;

    if (c >= 'a' && c<= 'z'){
        c -= 32;

    }

    if (c >= 'A' && c<= 'Z')cout<<c<<endl;

    return 0;
}