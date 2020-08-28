#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node* prev;
	Node* next;
};

Node* head;

Node* new(int x){
	Node* temp = new Node(); //creating a node in dynamic memory heap
	temp->data = x;
	temp->prev = NULL;
	temp->next = NULL;
	return temp;
}

void inserthead(int x){
	Node* newnode = new(x);
	if(head == NULL){
		head = newnode;
		return;
	}
	head->prev = newnode;
	newnode->next = head;
	head = newnode;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout);
#endif


}
