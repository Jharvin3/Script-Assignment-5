#include <stdio.h>
#include <stdlib.h>

struct tree_node{
    int data;
    struct tree_node* left;
    struct tree_node* right;
};

//Writing a function that will print out all values in a binary tree that is greater than or equal to a value passed to the function
void PrintBig(struct tree_node *current_ptr, int value){
    if(current_ptr == NULL){
        return;
    }
    PrintBig(current_ptr->left, value);
    if(current_ptr->data >= value){
        printf("%d ", current_ptr->data);
    }
    PrintBig(current_ptr->right, value);
}