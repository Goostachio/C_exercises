#include <iostream>
 
using namespace std;
 
//Declare node 
class Node{
public:
    int num;
    Node *next;
};
 
//Starting (Head) node
class Node *head=NULL;
 
//Insert node at start
void insert_Node(int n){
    class Node *new_node=new Node;
    new_node->num=n;
    new_node->next=head;
    head=new_node;
}
 
//Display all nodes
void display_all_nodes(){
	cout<<"The list contains the data entered:\n";
    class Node *temp = head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
 
void display_all_nodes_recursive(Node *node){
    if(node== NULL){
        return;
    }
    cout<< node->num<<" ";
    display_all_nodes_recursive(node->next);
}

int count(Node *node){
    if (node==NULL){
        return 0;
    }
    else return 1 + count(node->next);
}

int sum(Node *node){
    if (node==0){
        return 0;
    }
    return  node->num + sum(node->next) ;
}

void neg(Node *node){
    if (node==0){
        return;
    }

    if (node->num<0){
        cout<< (node->num)<<" ";
    }
    neg(node->next);

}

int main(){
    Node* head = NULL;
    insert_Node(1);
    insert_Node(-3);
    insert_Node(5);
    insert_Node(-7);
    insert_Node(9);
    insert_Node(-11);
    //display_all_nodes();
    display_all_nodes_recursive(head);
    //count(head);
    //cout<<sum(head)<<endl;
    //neg(head);


    return 0;
}

/*  PPL + DSA + OS  */