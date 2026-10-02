#include <iostream>

using namespace std;

int main(){
    int k = 0;
    char c = '.';
    cin>>k;
    cin>>c;

    while (c != '.'){
        if ((c >= 'a' && c<= 'w') || (c>= 'A' && c <= 'W')){
            c = c + k;
            cout<<c;
        } 
        else if ((c == 'x' || c == 'y' || c == 'z') || (c == 'X' || c == 'Y' || c == 'Z')){
            if(k >= 23)c += k;
            c -= 23; 
            cout<<c;
        } 
        else cout<<c;

        cin>>c;
        
    }



    return 0;
}