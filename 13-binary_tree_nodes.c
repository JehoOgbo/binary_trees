#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of nodes having at least one child
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL, required no. of nodes otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);

	nodes = 0;
	if (tree->left || tree->right)
		nodes = 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
