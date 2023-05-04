#ifndef TREE_H
#define TREE_H

typedef struct Node {
  int data;
  Node *left;
  Node *right;
} Node, *Tree;

Tree tree_init(int *, int);
void tree_destroy(Tree);
void tree_insert(Tree, int);
void tree_print(Tree);
Node *tree_search(Tree, int);
void tree_delete(Tree, int);

#endif // !TREE_H
