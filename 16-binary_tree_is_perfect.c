#include "binary_trees.h"

/**
 * b_size - measure the size of a binary tree (root included)
 *
 * @tree: The root node of the tree to measure
 *
 * Return: 0 if tree is NULL and size of the tree otherwise
 */
int b_size(const binary_tree_t *tree)
{
	int size_l;
	int size_r;

	if (!tree)
		return (0);
	size_l = tree->left ? 1 + b_size(tree->left) : 0;
	size_r = tree->right ? 1 + b_size(tree->right) : 0;
	return (size_l + size_r);
}

#include "binary_trees.h"

/**
 * height - measures the height of a binary tree (root not included)
 *
 * @tree: pointer to the root node of the tree
 * Return: height of the tree or 0 if tree is NULL
 */
int height(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (tree == NULL)
		return (0);
	height_l = tree->left ? 1 + height(tree->left) : 0;
	height_r = tree->right ? 1 + height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_is_perfect - checks to see if a binary tree is perfect
 * Description: a binary tree is said to be perfect if it is both full and has 0 balance factor
 *
 * @tree: pointer to the parent node of tree to be checked
 * Return: 0 if tree is NULL or if imperfect, 1 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t* tree)
{
	int perfect_size;
	int size;
	int hait;

	if (!tree)
		return (0);
	hait = height(tree);
	size = b_size(tree) + 1;
	perfect_size = (1 << (hait + 1)) - 1;
	if (size == perfect_size)
		return (1);
	/* for a certain height of tree there is a perfect no of nodes */
	/* simply verifying this tells us if that tree is perfect */
	return (0);
}
