#include <iostream>

using namespace std;

struct list {
    int val;
    list *next;
};
typedef list *plist;


void write_vertical(int n) {
    if (n <= 9)
        cout << n << endl;
    else {
        cout << n % 10 << endl;
        write_vertical(n / 10);
    }
}

void create_list_interactive();

int fibonacci_interactive(int n){
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return (fibonacci_interactive(n - 1) + fibonacci_interactive(n - 2));
}

int values_sum(int n){
    int sum = 0;
    if (n <= 9){
        return n;
    }
    else{
        return (n % 10) + values_sum(n / 10);
    }

}

int min_value_ricorsive(plist h){
    if (h -> next == NULL) return h -> val; //Se c'è solo 1 elemento restituisco quello
    int min = min_value_ricorsive(h -> next); //Il min è il successivo di h
    if (min >= h -> val) return h -> val;
    else return min;
}

int min_value_iteractive(plist h){
    int min = h -> val;

    while (h != NULL){
        if (h -> val <= min) min = h -> val;
        h = h -> next;
    }
    
    return min;
}

int sum_array(int a[], int len){
    if (len == 0) return 0;
    else return (a[len - 1] + sum_array(a, len - 1)); 
    
}

plist create_list(int n) {
    if (n == 0)
        return NULL;

    plist head = create_list(n - 1);

    plist p = new list;
    p->val = n;
    p->next = NULL;

    if (head == NULL)
        return p;

    plist q = head;
    while (q->next != NULL)
        q = q->next;

    q->next = p;

    return head;
}

#define len 4

int main() {

    int a[len];

    int sum = 0;

    for (int i = 0; i<len; i++) a[i] = i + 1;

    sum = sum_array(a, len);

    cout<<sum<<endl;



    plist head;

    int n = 1234;

    int minr = 0;
    int mini = 0;

    head = create_list(5);

    minr = min_value_ricorsive(head);

    mini = min_value_iteractive(head);

    cout<<minr<<endl;

    cout<<mini<<endl;

    write_vertical(1234);

    n = values_sum(n);

    cout<<n<<endl;

    return 0;
}