#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: pointer to the node whose depth is to be measured
 *
 * Return: 0 if tree is NULL and the depth otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		depth += 1;
		tree = tree->parent;
	}
	return (depth);
}
