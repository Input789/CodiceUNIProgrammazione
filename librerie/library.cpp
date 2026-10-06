#include "library.h"
#include <cmath>

using namespace std;

int bin2dec(int binario){
    int decimale, i = 1;

    int cifra = 0;

    i = 1;
    decimale = 0;

    while (binario > 0){
        cifra = binario % 10;
        decimale += cifra * i;
        i *= 2;
        binario /= 10;
    }
    return decimale;
}

int dec2bin(int decimale){
    int cifra = 0;
    int binario = 0;
    int i = 0;

    while (decimale > 0){
        cifra = decimale%2;
        binario += cifra * pow(10, i);
        decimale /= 2;
        i++;
    }

    return binario;
}

int bin_sum(int b1, int b2){
    return dec2bin(bin2dec(b1)+ bin2dec(b2));
}

int bin_prod(int b1, int b2){
    return dec2bin(bin2dec(b1) * bin2dec(b2));
}

