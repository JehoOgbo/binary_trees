#include "binary_trees.h"

/**
 * binary_tree_balance_left - measures the height of the left branch
 * of a binary tree
 *
 * @tree: pointer to the root node of the tree whose balance factor is
 *			required
 * @one_off: variable to show when to return the left height
 * Return: height of left branch of the treeC:\Users\HP\Documents\200L\electrical-and-electronic-principles-and-technology-john-bird.pdf
 */
int binary_tree_balance_left(const binary_tree_t *tree, int one_off)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	height_l = 0;
	height_r = 0;
	if (tree->left)
		height_l = 1 + binary_tree_balance_left(tree->left, 0);
	if (tree->right)
		height_r = 1 + binary_tree_balance_left(tree->right, 0);
	if (one_off == 0)
		return (height_l > height_r ? height_l : height_r);
	return (height_l);
}

/**
 * binary_tree_balance_right - measures the height of the right branch
 * of a binary tree
 *
 * @tree: pointer to the root node of the tree whose balance factor
 * is required
 * @one_off: variable to show when to return the right height
 *
 * Return: height of the right branch
 */
int binary_tree_balance_right(const binary_tree_t *tree, int one_off)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	height_l = 0;
	height_r = 0;
	if (tree->right)
		height_r = 1 + binary_tree_balance_right(tree->right, 0);
	if (tree->left)
		height_l = 1 + binary_tree_balance_right(tree->left, 0);
	if (one_off == 0)
		return (height_r > height_l ? height_r : height_l);
	return (height_r);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of tree to measure
 *
 * Return: 0 if tree is null, balance factor otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return(binary_tree_balance_left(tree, 1) - binary_tree_balance_right(tree, 1));
}
