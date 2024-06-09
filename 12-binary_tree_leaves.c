#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the binary tree
 *
 * Return: 0 if tree is null, number of leaves otherwise.
 * Null pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf;

	if (!tree)
		return (0);

	leaf = 0;
	if (!(tree->left) && !(tree->right))
	{
		leaf = 1;
	}
	else
	{
		leaf += binary_tree_leaves(tree->left);
		leaf += binary_tree_leaves(tree->right);
	}

	return (leaf);
}
