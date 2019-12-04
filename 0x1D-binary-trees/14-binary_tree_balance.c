#include "binary_trees.h"

int _bt_height(const binary_tree_t *tree)
{
  int rightdepth, leftdepth;
  
  if (tree == NULL)
    return (0);
  else
    {
      rightdepth = _bt_height(tree->right);
      leftdepth = _bt_height(tree->left);

      if (rightdepth < leftdepth)
	return (leftdepth + 1);
      else
	return (rightdepth + 1);
    }
}

int bt_height(const binary_tree_t *tree)
{
  if (!tree)
    return (0);
  
  return (_bt_height(tree) - 1);
}
int binary_tree_balance(const binary_tree_t *tree)
{
  return (bt_height(tree->left) - bt_height(tree->right));
}
