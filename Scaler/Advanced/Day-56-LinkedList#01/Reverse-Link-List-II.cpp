/*
Problem Description
Reverse a linked list A from position B to C.

NOTE: Do it in-place and in one-pass.

Problem Constraints
1 <= |A| <= 10^6

1 <= B <= C <= |A|

Input

 A = 1 -> 2 -> 3 -> 4 -> 5
 B = 2
 C = 4

 Output
  1 -> 4 -> 3 -> 2 -> 5
*/

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *next;
    Node(int d){
        val=d;
        next=NULL;
    }
};
Node *head=NULL;
int size_of_ll=0;
int main(){

}