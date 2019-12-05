#include "binary_trees.h"
/**
 * binary_tree_nodes - count number of non leaf nodes
 * @tree: pointer to node
 * 
 * Return - number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
  if (tree == NULL || (tree->left == NULL && tree->right == NULL))
    return 0;
  else
    return 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
}
