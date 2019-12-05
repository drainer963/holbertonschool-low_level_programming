#include "binary_trees.h"
/**
 * _binary_tree_height - find tree height
 * @tree: pointer to node
 * 
 * Return - height
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
  int rightdepth, leftdepth;
  
  if (tree == NULL)
    return (0);
  else
    {
      rightdepth = _binary_tree_height(tree->right);
      leftdepth = _binary_tree_height(tree->left);

      if (rightdepth < leftdepth)
	return (leftdepth + 1);
      else
	return (rightdepth + 1);
    }
}
/**
 * binary_tree_height - return height
 * @tree: pointer to node
 * 
 * Return - height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
  if (!tree)
    return (0);
  
  return (_binary_tree_height(tree) - 1);
}
