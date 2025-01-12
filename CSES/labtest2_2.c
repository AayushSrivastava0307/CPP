/*
Name=Mayank Modi
dept=CSE
Roll=23CS10089*/

//NOTE: the input is hardcoded as instructed by the TAs'.Change that in main func for diff inputs
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int ans=0; //this keeps a count for the total number of paths


//standard tree creation
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}


//this function search if a node is present in a tree rooted at 'root'
int search(struct node* root,struct node* node){
    if(root==NULL) return 0;
    if(root==node) return 1;
    else{
        int left=search(root->left,node);
        int right=search(root->right,node);
        return left || right;
    }
}


//this is the function which tells whether we can count a path from a particular node
void countpath(struct node* root,struct node* node,int x){

    int total_sum=root->data;
    struct node* temp=root;

    //first we go the node from the root and take the total sum of the  entire path
    while(temp!=node){
        if(search(temp->left,node)){
            temp=temp->left;
        }
        else if(search(temp->right,node)){
            temp=temp->right;
        }
        total_sum+=temp->data;
    }
    // printf("the total sum is:%d\n",total_sum);
    

    // now we move from root to node again but deacreasing total sum each time accordingly and if we detect that total_sum==x we increase our ans;
    if(total_sum==x) ans++;
    total_sum-=root->data;
    if(total_sum==x) ans++;
    struct node* temp1=root;

    while (temp1 != node)
    {
        if (search(temp1->left, node))
        {
            temp1 = temp1->left;
        }
        else if (search(temp1->right, node))
        {
            temp1 = temp1->right;
        }

        total_sum -= temp1->data;
        if(total_sum==x){
            // printf("path counted\n");
            ans++;
        }
    }
}


//for selecting every node we are doing preorder traversal
void preorder(struct node* root,struct node* node,int x){
    if(node==NULL) return;

    countpath(root,node,x);

    preorder(root,node->left,x);
    preorder(root,node->right,x);
}


int main(){
    int x;
    printf("enter x:");
    scanf("%d",&x);

    struct node*root = newNode(-8);
    root->left = newNode(2);
    root->right = newNode(7);
    root->left->left = newNode(8);
    root->left->right = newNode(4);
    root->right->left = newNode(-1);
    root->right->right = newNode(6);
    root->left->right->left = newNode(2);
    root->right->left->left = newNode(7);
    root->right->left->right = newNode(7);
    root->right->right->right = newNode(1);

    // countpath(root, root->left->right,x);

    preorder(root,root,x);
    printf("Number of paths: %d\n",ans);
}


