#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node)
{
  if (node->parent == NULL && node)
    return (1);
  else
    return (0);
}
