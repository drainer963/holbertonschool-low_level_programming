#include "binary_trees.h"
/**
 * binary_tree_inorder - in order traversal
 * @tree: pointer to node
 * @func: function pointer
 * 
 * Return - void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
  if (tree == NULL)
    return;

  binary_tree_inorder(tree->left, func);
  printf("%d\n", tree->n);
  binary_tree_inorder(tree->right, func);
}
