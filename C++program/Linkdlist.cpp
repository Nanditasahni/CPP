//creation of node
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(){//default constructor}
//         this->next=nullptr;

//     }
//     Node(int data){
//         this->data = data;
//         this->next=nullptr;
//     }
// };
// void print(Node*head){
//     Node*temp = head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp= temp->next;
//     }
// }
// int main(){
//     Node*head = new Node(10);
//     Node*first = new Node(20);
//     Node*second = new Node(30);
//     Node*third = new Node(40);

//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = nullptr;

//     print(head);


// return 0;
// }
  



//count number of lin
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;

//     node(int data){ //para constructor
//     this->data =data;
//     this->next = nullptr;


//     }
// };
//     int countnode(node*head){
// int count = 0;
// node*temp = head;
// while(temp!=nullptr){
// count++;
// temp = temp->next;
// }
// return count;
//     }

// int main(){
//    node*head = new node(10);
//      node*first=new node(11);
//       node*second=new node(12);
//        node*third=new node(13);

//        head->next = first;
//        first->next = second;
//        second->next = third;
//        third ->next = nullptr;

//        int total = countnode(head);
//        cout<<"no of linklist"<<total<<endl;
//        return 0;

// }

//insert at begning////////////////////
// 
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;
//     node(int data){
//         this->data = data;
//         this->next=nullptr;

//     }
// };
// //print link list
// void printll(node*head){
//     node*temp = head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
// }

// void insertatTail(node*&head,node*&tail,int data){
//     if(head==nullptr){
//         //new node creat karenge
//         node*newnode =new node(data);
//         //head aor tail ko point karwaenge newnode se
//         head = newnode;
//         tail = newnode;
        


//     }
//     else{
//         //nonempty
//         node*newnode = new node(data);
//         tail->next = newnode;
//         tail = newnode;
//     }
// }
// int main(){
//     node*head = new node(10);
//     node*first = new node(20);
//     node*second = new node(30);

//     head->next = first;
//     first->next = second;
//     node*tail= second;
//      insertatTail(head,tail,50);
//      printll(head);
//      return 0;
    
// }

//ataiched at end 
// #include<iostream>
// using namespace std;
// class node
// {
//     public:
//     int data;
//     node*next;
     
//     node(int data){
//         this->data=data;
//         this->next =nullptr;

//     }
// };
// //ll print
// void printll(node*head){
//     node*temp = head;
//     while(temp!=nullptr){
// cout<<temp->data<<"->";
// temp = temp->next;

//     }
// }
// //insert at end
// void Insertatend(node*&head,node*tail,int data){
//     if(head==nullptr){
//         node*newnode = new node(data);
//         //head aor tail ko new node ke sath point karao
//         head = newnode;
//         tail = newnode;


//     }
//     else{
//         //nonempaty
//         node*newnode =new node(data);
//         tail->next = newnode;
//         tail = newnode;
//     }
// }
// int main(){
    
//     node*head = new node(10);
//     node*first = new node(20);
//     node*second = new node(30);
//     head->next = first;
//     first ->next = second;
//     node*tail = second;

// Insertatend(head,tail,500);
// cout<<"after insert at end"<<endl;
// printll(head);
// return 0;

// }


//DOubly linklist
#include<iostream>
using namespace std;
class node {
    public:
    //creation of doblly linklist
    int data;
    node*next;
    node*prev;
    node(){
        this->next = nullptr;
        this->prev = nullptr;
    }
    node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev= nullptr;

    }
    

};
//insert at head
void insertathead(node* &head,node* &tail,int data){
    //empty LL
    node*newNode = new node(data);
    if(head == nullptr){
        head = tail = newNode;


    }else{
    //non empty 
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
}
void printLL(node*head){
    node*temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"<->";
        temp = temp->next;
    }
    cout<<"null";
    
}
int main(){
    node*head = nullptr;
    node*tail= nullptr;
    insertathead(head,tail,20);
    insertathead(head,tail,30);
    insertathead(head,tail,40);
    printLL(head);
    return 0;
}