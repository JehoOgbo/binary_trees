#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a tree taking left, right then root
 * Description: Show the information stored in the nodes in above order
 *
 * @tree: tree which is to be traversed
 * @func: *pointer to the operation to be performed on the info in tree
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
