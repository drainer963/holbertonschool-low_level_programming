#include "binary_trees.h"
/**
 * max - return max value
 * @a: a value
 * @b: another value
 *
 * Return: The maximum of a and b
 */
size_t max(size_t a, size_t b)
{
	return (a > b ? a : b);
}
size_t _binary_tree_height(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);
  return (1 + max(
		  _binary_tree_height(tree->left),
		_binary_tree_height(tree->right)));
}
int binary_tree_balance(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);
  return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
