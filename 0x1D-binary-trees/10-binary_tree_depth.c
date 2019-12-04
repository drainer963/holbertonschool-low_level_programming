#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
  int ld = 0, rd = 0;
  
  if (tree == NULL || !tree->parent)
    return 0;
  else
  {
    ld = binary_tree_depth(tree->left);
    rd = binary_tree_depth(tree->right);
    if (ld > rd)
      return (ld + 1);
    else
      return (rd + 1);
  }
}
