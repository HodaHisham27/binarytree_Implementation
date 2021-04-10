#include <iostream>
#define treeEntry int

using namespace std;

struct treeNode
{
    treeEntry data;
    treeNode *left;
    treeNode *right;
};
struct tree
{
    treeNode *root;
};

void creareTree ( tree *pt );
void Insert ( tree *pt , treeEntry item );
bool IsEmpty (tree *pt);
bool IsFull (tree *pt);
void InorderTraverse (treeNode *pn , void (*traverse)(treeEntry));
void PreorderTraverse (treeNode *pn , void (*traverse)(treeEntry));
void PostorderTraverse (treeNode *pn , void (*traverse)(treeEntry));