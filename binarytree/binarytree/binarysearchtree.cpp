//
//  binarysearchtree.cpp
//  binarytree
//
//  Created by Lex on 9/19/16.
//  Copyright © 2016 Lex Radulovic. All rights reserved.
//

#include "binarysearchtree.hpp"
#include <string>

using namespace std;

Node::Node(string data)
{
    data_ = data;
    left_ = NULL;
    right_ = NULL;
}

BinarySearchTree::BinarySearchTree()
{
    root_ = NULL;
}

bool BinarySearchTree::Insert(string data)
{
    if (root_ == NULL)
    {
        root_ = new Node(data);
        return true;
    } // if
    else
    {
        Node* curr = root_;
        while (curr != NULL)
        {
            if (data < curr->data_)
            {
                if (curr->left_ == NULL)
                {
                    curr->left_ = new Node(data);
                    return true;
                } //if
                else
                {
                    curr = curr->left_;
                } //else
            } //if
            else
            {
                if (curr->right_ == NULL)
                {
                    curr->right_ = new Node(data);
                    return true;
                }
                else
                {
                    curr = curr->right_;
                }
            }
        } //while
/*        if (data < curr->data_)
        {
            if (curr->left_ == NULL)
            {
                
            } // nested if
        } // if
*/
    } // else
    return false;
}
