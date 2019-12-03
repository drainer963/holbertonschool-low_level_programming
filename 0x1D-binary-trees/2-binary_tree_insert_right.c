
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new node to the right of parent.
 * @parent: parent node
 * @value: value for new node to store
 *
 * Return: pointer to the newly created node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->right = parent->right;
	if (new->right)
		new->right->parent = new;
	new->left = NULL;

	parent->right = new;

	return (new);
}
