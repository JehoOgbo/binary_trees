#include "binary_trees.h"

/**
 * binary_tree_size_add_1 - measures the size of a binary tree plus root
 * Description: The size of a tree is how many nodes are in it
 * @tree: the root node of the binary tree to measure
 *
 * Return: 0 if tree is NULL and size of the tree otherwise
 */
size_t binary_tree_size_add_1(const binary_tree_t *tree, int one_if_root)
{
	size_t size_l;
	size_t size_r;

	size_l = tree->left ? 1 + binary_tree_size_add_1(tree->left, 0): 0;
	size_r = tree->right ? 1 + binary_tree_size_add_1(tree->right, 0) : 0;
	return (size_l + size_r + one_if_root);
}

/**
 * binary_tree_size - measures the size of a binary tree (root included)
 * Description: 1 needs to be added to the above function
 * @tree: the root node of the binary tree to measure
 *
 * Return: 0 if tree is NULL and size of the tree otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size_add_1(tree, 1));
}
