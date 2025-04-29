#include <iostream>
using namespace std;

struct list{
    int inf;
    list *next;
    list *prev;
};

void push(list *&h, list *&t, int x){
    list *r = new list;
    r->inf=x;
    r->next=NULL;
    if(!h && !t){
        r->prev=NULL;
        h=r;
    }
    else{
        t->next=r;
        r->prev=t;
    }
    t=r;
}

void push_front(list *&h, list *&t, int x){
    list *r = new list;
    r->inf=x;
    r->prev=NULL;
    if(!h && !t){
        r->next=NULL;
        h=r;
    }
    else{
        h->prev=r;
        r->next=h;
    }
    h=r;
}

void print(list *&h, list *&t){
    list *p = h;
    while(p){
        cout << p->inf << " ";
        p = p->next;
    }
}

int find_min(list *h, list *t){
    list *p = h;
    int min_el = p->inf;
    while(p){
        if(min_el > p->inf) min_el = p->inf;
        p=p->next;
    }
    return min_el;
}

list *find(list *h, list *t, int x){
    list *p = h;
    while(p){
        if (p->inf == x) break;
        p = p -> next;
    }
    return p;
}


void insert_after(list *&h, list *&t, list *r, int y){
    list *p = new list;
    p->inf=y;
    if (r==t){
        p->next = NULL;
        p->prev = r;
        r->next=p;
        t = p;
    }
    else{
        r->next->prev=p;
        p->next=r->next;
        p->prev=r;
        r->next=p;
    }

}


/*
void insert_before(list *&h, list *&t, list *r, int y){
    list *p = new list;
    p->inf = y;
    if(r==h){
        p->prev = NULL;
        p->next = r;
        r->prev = p;
        h = p;
    }
    else{

    }

}*/

void result(list *&h, list *&t, int x){
    int min_el = find_min(h, t);
    if (h->inf=min_el) push_front(h, t, x);
    list *p = h->next->next;
//    if (p->inf=min_el){
//        push_front(h, t, x);
//        p=p->next;
    while(p){
        if(p->inf == min_el) insert_after(h, t, p->prev, x); 
        p=p->next;
    }
}

//1 9 1 8 7 1 1 3 2 1
int main(){
    int n, y;
    list *h = NULL;
    list *t = NULL;
    cout << "n= "; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> y;
        push(h, t, y);
    }
    print(h, t);
    cout << "------------------------" << endl;
    int x; cout << "X - "; cin >> x;

    result(h, t, x);
    //push_front(h, t, x);
    print(h, t);
    return 0;
}