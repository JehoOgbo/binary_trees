#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another
 *
 * @parent: the parent node
 * @value: the value to be stored in the new node
 *
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		node = binary_tree_node(parent, value);
		parent->right = node;
	}
	else
	{
		node = binary_tree_node(parent, value);
		new = parent->right;
		parent->right = node;
		node->right = new;
		node->right->parent = node;
	}
	return (node);
}
