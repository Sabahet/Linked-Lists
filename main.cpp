//
//  main.cpp
//  Lab 6
//
//  Created by Sabahet Alovic on 3/30/20.
//  Copyright © 2020 Sabahet Alovic. All rights reserved.
//

#include <iostream>

using namespace std;
struct node* head = NULL;

struct node{
    int value;
    node * next;
};

class linkedList {
 
public:
node*head=NULL;

    linkedList () {head=NULL; length=0;}
    
bool operator > (int a) ;/* insert an integer at the end of the linked list
                                                  using the operator new */
void displayList ( );
    
bool  Insert (int i, int a);
    
//~linkedList ( ) ; // implement destructor
    
private:
    
int length;   // number of nodes
    
};


int main() {
    linkedList L_;

    L_.Insert(1, 34);
    L_.Insert(1, 23);
    L_.Insert(3, 12);
    L_.Insert(2, 50);
    L_.Insert(1, 54);
    L_.Insert(7, 11);

    L_.operator>(13);
       L_.displayList();
    
    return 0;
}


bool linkedList :: Insert (int i, int a){

    struct node* ptr;

    if(i-1 > length || i<=0){
        cout << "Invalid Position! (" << i << "," << a << ")" << endl;
        return false;
    }

    if(i==1){
        ptr =new node;
        ptr->value=a;
        ptr->next = head;
        head=ptr;
        length++;
        return true;
    }
    
    if(i>1){
        ptr = new node;
        node* temp = new node;
        ptr=head;
    for(int j=1; j<i-1; j++){
        ptr = ptr->next;
    }
        temp->value=a;
       temp-> next = ptr->next;
        ptr->next=temp;
        length++;
        return true;
    }
    
    

    return false;
}

void linkedList :: displayList()
{
     struct node* ptr;
     ptr = head;
     while (ptr != NULL) {
        cout<< ptr->value <<" ";
        ptr = ptr->next;
     }
  }

bool linkedList :: operator > (int a){
    node* temp = new node;
    struct node* ptr;
    ptr = head;
    
    for(int j=1; j<length; j++){
        ptr = ptr->next;
    }
     temp->value=a;
    temp-> next = ptr->next;
     ptr->next=temp;
     length++;
    
    return true;
}
