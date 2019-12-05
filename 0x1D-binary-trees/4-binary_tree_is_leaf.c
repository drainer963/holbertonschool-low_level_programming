#include "binary_trees.h"
/**
 * binary_tree_is_leaf - insert node to left of parent
 * @node: node
 * 
 * Return - 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
  if (!node->left && !node->right)
    return (1);
  else
    return (0);
  
}
