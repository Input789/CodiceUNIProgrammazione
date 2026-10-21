#include <iostream>

using namespace std;

const int length = 40;

struct set {
    int data[length];
    int num_el;
} ; //Ci va il ; alla fine di una struttura struct

set empty_set(){
    set tmp;
    tmp.num_el = 0;
    return (tmp);
}

bool is_in(set s, int e){
    if (s.num_el == 0) return (false); //L'insieme è vuoto
    else{
        int left = 0;
        int right = s.num_el;
        int m = 0;
        bool found = false;
        while ((left < right) && (!found)){ //Ricerca binaria
            m = (left + right) / 2;
            if (s.data[m] == e) found = true;
            else if (s.data[m] > e) right = m;
            else left = m + 1;
        }
        return (found);
    }
}

set intersection(set s1, set s2){
    if ((s1.num_el == 0) || (s2.num_el == 0)) return (empty_set()); //Se S1 o S2 sono vuoti, l'intersezione è empty_set (l'insieme vuoto)
    else{
        set s_intersection = empty_set();
        int i = 0;
        int j = 0;
        while ((i < s1.num_el) && (j < s2.num_el)){
            if (s1.data[i] == s2.data[j]){
                s_intersection.data[s_intersection.num_el] = s1.data[i];
                s_intersection.num_el ++;
                i++;
                j++;
            }
            else if(s1.data[i] < s2.data[j]) i++; //L'array è ordinato, magari s1.data è 1 ed s2.data è 2, ma non vuol dire che più avanti non ci sia
            else j++; //Stesso ragionamento, magari s1.data è 2 ed s1.data è 1, ma non vuol dire che più avanti non ci sia 
        }
        return (s_intersection);
    }
}

set set_union(set s1, set s2){
    if (s1.num_el == 0) return(s2); //L'unione tra s2 e l'insieme vuoto è s2
    else if (s2.num_el == 0) return(s1); //L'unione tra s1 e l'insieme vuoto è s1
    else{
        set s_union = empty_set();
        int i = 0;
        int j = 0;
        //Unione di due array ordinati
        while ((i < s1.num_el) && (j < s2.num_el) && (s_union.num_el < length)){ //Ovviamente l'insieme unione non puù superare length, quindi al massimo non avrà tutti gli elementi dell'unione
            if (s1.data[i] < s2.data[j]){ //S deve essere ordinato, quindi controllo se s2 è più grande di s1, esempio se s2 è 2 ed s1 è 1, s è 1 poi 2
                s_union.data[s_union.num_el] = s1.data[i];
                s_union.num_el ++;
                i ++;
            }
            else if (s1.data[i] > s2.data[j]){ //S deve essere ordinato, stesso ragionamento, controllo se s1 è più grande di s2, esempio se s1 è 2 ed s2 è 1, s è 1 poi 2
                s_union.data[s_union.num_el] = s2.data[j];
                s_union.num_el ++;
                j ++;
            }
            else{ //Se s1 ed s2 sono uguali, prendo solo 1 s, ad esempio se s1 è 1 ed s2 è 1, s è 1 1 volta
                s_union.data[s_union.num_el] = s1.data[i];
                s_union.num_el ++;
                i++;
                j++;
            }
        }
         //Se s1 o s2 sono terminati ma s2 o s1 hanno ancora elementi, li aggiungiamo
        while ((i < s1.num_el) && (s_union.num_el < length)){
            s_union.data[s_union.num_el] = s1.data[i];
            s_union.num_el++;
            i++;
        }
        while ((j < s2.num_el) && (s_union.num_el < length)){
            s_union.data[s_union.num_el] = s2.data[j];
            s_union.num_el ++;
            j++;
        }

        return (s_union);
    }
}

set add(set s, int e){
    if (s.num_el == 0){
        s.num_el++;
        s.data[0] = e;
        return (s); //L'insieme è vuoto, s U e = e
    } 
    else if (s.num_el >= length){
        cout<<"Insieme pieno"<<endl;
        return (s);
    }
    else if (is_in(s, e)){
        cout<<"Elemento già presente nella pila"<<endl;
        return (s);
    }
    else{
        int i = 0;
        while ((i < s.num_el) && e > s.data[i]) i++;
        if (i == s.num_el){
            s.data[i] = e;
            s.num_el ++;
        }
        else{
            int tmp = s.data[i];
            s.data[i] = e;
            s.num_el++;
            for (int j = i + 1; j < s.num_el; j++){
                int tmp2 = s.data[j];
                s.data[j] = tmp;
                tmp = tmp2; 
            }
        }
    }
    return (s);
}

int main(){
    set s1 = empty_set();
    
    //Main Fatto Da ChatGPT
    s1.data[0] = 1;
    s1.data[1] = 3;
    s1.data[2] = 5;
    s1.data[3] = 8;
    s1.num_el = 4;

    set s2 = empty_set();
    s2.data[0] = 2;
    s2.data[1] = 3;
    s2.data[2] = 6;
    s2.data[3] = 8;
    s2.data[4] = 10;
    s2.num_el = 5;

    // Stampa s1
    cout << "s1 = { ";
    for (int i = 0; i < s1.num_el; i++)
        cout << s1.data[i] << " ";
    cout << "}" << endl;

    // Stampa s2
    cout << "s2 = { ";
    for (int i = 0; i < s2.num_el; i++)
        cout << s2.data[i] << " ";
    cout << "}" << endl;

    // Test is_in
    cout << "5 in s1? " << is_in(s1, 5) << endl;
    cout << "7 in s1? " << is_in(s1, 7) << endl;

    // Intersezione
    set s3 = intersection(s1, s2);

    cout << "Intersezione = { ";
    for (int i = 0; i < s3.num_el; i++)
        cout << s3.data[i] << " ";
    cout << "}" << endl;

    // Unione
    set s4 = set_union(s1, s2);

    cout << "Unione = { ";
    for (int i = 0; i < s4.num_el; i++)
        cout << s4.data[i] << " ";
    cout << "}" << endl;

    // Test add
    s1 = add(s1, 6);

    cout << "s1 dopo add(6) = { ";
    for (int i = 0; i < s1.num_el; i++)
        cout << s1.data[i] << " ";
    cout << "}" << endl;




    return 0;
}

