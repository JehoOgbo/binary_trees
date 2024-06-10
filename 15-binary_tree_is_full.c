#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * Description: a binary tree is full if all it's nodes
 *			contain zero or two nodes
 * @tree: pointer of the root node of the tree to check
 * Return: 0 if tree is null or if tree is not full
 *			return 1 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
