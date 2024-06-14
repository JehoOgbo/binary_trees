#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a binary tree node
 *
 * @node: pointer to the node whose uncle is to be found
 * Return: NULL if node is null or if uncle does not exist
 * pointer to the uncle otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *hold;

	if (!node)
		return (NULL);
	if (!(node->parent))
		return (NULL);
	if (!(node->parent->parent))
		return (NULL);
	hold = node->parent->parent->left;
	if (hold == NULL)
		return (NULL);
	if (hold->left == node || hold->right == node)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
