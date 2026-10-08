#include <iostream>

using namespace std;

char encode (char c, int l){
    if ((c >= 'a') && (c <= 'z')){
        c = 'a' + (c - 'a' + l) % 26;
    }
    else if ((c >= 'A') && (c <= 'Z')){
        c = 'A' + (c - 'A' + l) % 26;
    }

    return c;


}

char decode (char c, int l){
    if ((c >= 'a') && (c <= 'z')){
        c = 'a' + (c - 'a' - l + 26) % 26;
    }
    else if ((c >= 'A') && (c <= 'Z')){
        c = 'A' + (c - 'A' - l + 26) % 26;
    }

    return c;

}

int main(){
    char o, n = '.';
    int l = 0;
    int n1 = 0;


    cin>>o>>n1>>l;

    for (int i = 0; i<n1; i++){
        cin >> n;
        if (o == 'E') cout<<encode(n, l)<<endl;
        else if (o == 'D')cout<<decode (n, l)<<endl;
    }




    return 0;
}