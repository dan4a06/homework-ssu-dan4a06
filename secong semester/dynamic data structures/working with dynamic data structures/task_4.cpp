#include <iostream>
using namespace std;

// 8 5 11 -1 7 1 10 -1 8 2 1
/*
struct stack{
    int inf;
    stack *next;
};

void push(stack *&h, int x){
    stack *r = new stack;
    r->inf=x;
    r->next=h;
    h = r;
}

int pop(stack *&h){
    int i = h->inf;
    stack *r = h;
    h = h->next;
    delete r;
    return i;
}

void reverse(stack *h){
    stack *head1 = NULL;
    while (h)
        push(head1, pop(h));
    h = head1;
}

int stack_min(stack *h) {
    stack *temp = NULL;
    int min = pop(h);
    push(temp, min);
    while (h){
        int x = pop(h);
        if (x < min)
            min = x;
        push(temp, x);
    }
    reverse(temp);
    h = temp;
    return min;
}

stack *result(stack *h){
    int min = stack_min(h);
    stack *temp = NULL;
    int new_el, x;
    cout << "new element = "; cin >> new_el;
    while (h){
        x = pop(h);
        push(temp, x);
        if (x == min)
            push(temp, new_el);
    }
    return (temp);
}

int main () {
    stack *h = NULL;
    int n, x;
    cout << "number of elements "; cin >> n;
    cout << "Input element\n";

    for (int i = 0; i < n; i++){
        cin >> x;
        push(h, x);
    }

    h = result(h);
    
    while(h)
        cout << pop(h) << " ";

    return 0;
}
*/

//поставить 55 строчку после 57 чтобы новый элемент вставлялся после минимального а не перед минимальным