#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another
 *
 * @parent - the parent node
 * @value - the value to be stored in the new node
 *
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *save;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	
	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		save = parent->left;
		parent->left = node;
		node->left = save;
	}
	return (node);
}
