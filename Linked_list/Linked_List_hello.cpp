#include <iostream>
#include <map>
#include<string.h>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
#include<array> 
#include <unordered_map>
#include<cmath>


using namespace std;
 struct Node
 {
  int data;
  Node* next;
 };


void printList(Node* n){
    while(n !=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }

}

int main(){
  Node* head=NULL;
  Node* second=NULL;
  Node* third=NULL;

  head=new Node();
  second=new Node();
  third=new Node();

  head->data;
  head->next=second;
  second->data=2;
  second->next=third;
  third->data=3;
  third->next=NULL;
  printList(head);



 
    return 0;
}