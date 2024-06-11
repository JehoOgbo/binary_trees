#include "binary_trees.h"

/**
 * binary_tree_sibling - returns the sibling of the node
 * Description: The sibling is one which shares a parent
 *
 * @node: node whose sibling is to be found
 * Return: pointer to the sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (!(node->parent))
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
