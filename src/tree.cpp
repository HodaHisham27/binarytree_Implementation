#include "../include/tree.h"

void creareTree ( tree *pt )
{
    pt->root=NULL;
}


void Insert ( tree *pt , treeEntry item )
{
    treeNode *node = new treeNode;
    node->data = item;
    node->left = NULL;
    node->right = NULL;
    treeNode *temp1 = pt->root , *temp2;

    if (!temp1)
    {
        pt->root = node;
    }
    else
    {
    while (temp1)
    {
        temp2 = temp1;

        if (temp1->data < item)
        {
            temp1=temp1->right;
        }
        else
        {
            temp1=temp1->left;
        }
    }

    if (temp2->data < item)
    {
        temp2->right = node;
    }
    else
    {
        temp2->left = node;
    }
    }
    return ;

}


bool IsEmpty (tree *pt)
{
    return (!(pt->root));
}


bool IsFull (tree *pt)
{
    return 0;
}


void InorderTraverse (treeNode *pn , void (*traverse)(treeEntry))
{
    if (!pn)
        return ;
    InorderTraverse(pn->left , traverse);
    traverse(pn->data);
    InorderTraverse(pn->right , traverse);
}


void PreorderTraverse (treeNode *pn , void (*traverse)(treeEntry))
{
    if (!pn)
        return ;
    traverse(pn->data);
    PreorderTraverse(pn->left , traverse);
    PreorderTraverse(pn->right , traverse);

}


void PostorderTraverse (treeNode *pn , void (*traverse)(treeEntry))
{
    if (!pn)
        return ;
    PostorderTraverse(pn->left , traverse);
    PostorderTraverse(pn->right , traverse);
    traverse(pn->data);
}

