#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* binary search tree */
typedef struct binary_tree_s bst_t;
/* AVL tree */
typedef struct binary_tree_s avl_t;
/* Max Binary Heap*/
typedef struct binary_tree_s heap_t;

/* create a new node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* print a binary tree */
void binary_tree_print(const binary_tree_t *);

/* insert a node as the left child of another */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* insert a node as the right child of another */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* check if a node is a leaf or not */
int binary_tree_is_leaf(const binary_tree_t *node);

/* delete an entire binary tree */
void binary_tree_delete(binary_tree_t *tree);

/* checks if a node is root */
int binary_tree_is_root(const binary_tree_t *node);

/* traverses a tree in preorder */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* traverses a tree using inorder traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* traverses a tree using postorder traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* find out the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* find out the depth of a node in a binaryt tree */
size_t binary_tree_depth(const binary_tree_t *tree);

/* find out the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree);

/* counts the leaves in a binary tree */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* counts the number of nodes with at least one child*/
size_t binary_tree_nodes(const binary_tree_t *tree);

/* measures the balance factor of a binary tree*/
int binary_tree_balance(const binary_tree_t *tree);

/* checks if a binary tree is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* checks if a binary tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

#endif /*BINARY_TREE_H*/
