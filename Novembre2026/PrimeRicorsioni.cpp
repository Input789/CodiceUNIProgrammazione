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

int sum_array_tail(int a[], int len, int state){
    if (len <= 0) return state;
    else return sum_array_tail(a, len - 1, state + a[len - 1]);
}

int sum_array_tail_it(int a[], int len, int state){
    for (int i = 0; i < len; i++) state += a[i];
    return state;
}

int square_radiz(int n, int i){
    if ((i * i) > n) return i - 1;
    else return square_radiz(n, i + 1);

    
}

int research(int v, const int a[], int min_index, int max_index){
    if (min_index > max_index) return -1;
    else{
        int mid = (max_index + min_index)/2;
        if (a[mid] == v) return mid;
        else if (a[mid] == v) return research(v, a, min_index, mid - 1);
        else return research(v, a, mid + 1, max_index);
    }
}

int research_it(int v, const int a[], int min_index, int max_index){}

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

    int sum_ric = 0;
    int sum_ite = 0;

    int radiz = 0;

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

    sum_ric = sum_array_tail(a, len, sum_ric);
    sum_ite = sum_array_tail_it(a, len, sum_ite);

    radiz = square_radiz(400, 0);

    cout<<sum_ric<<endl;
    cout<<sum_ite<<endl;
    
    cout<<radiz<<endl;

    return 0;
}