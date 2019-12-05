#include "binary_trees.h"
/**
 * binary_tree_is_root - check if node if root
 * @node: pointer to node
 * 
 * Return - bool
 */
int binary_tree_is_root(const binary_tree_t *node)
{
  if (node->parent == NULL && node)
    return (1);
  else
    return (0);
}
