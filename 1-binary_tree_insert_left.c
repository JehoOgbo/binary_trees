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

	if (parent->left == NULL)
	{
		node = binary_tree_node(parent, value);
		parent->left = node;
	}
	else
	{
		while(parent->left != NULL)
		{
			parent = parent->left;
		}
		node = binary_tree_node(parent, value);
		parent->left = node;
	}
	return (node);
}
