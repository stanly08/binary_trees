#include "binary_trees.h"
#include "limits.h"

/**
 ** is_bst_helper - Checks if a binary tree is a valid binary search tree.
 ** @tree: A pointer to the root node of the tree to check.
 ** @min: The minimum value that the current node can take.
 ** @max: The maximum value that the current node can take.
 **
 ** Return: If the tree is a valid BST, 1, otherwise, 0.
 **/
int is_bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (is_bst_helper(tree->left, min, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, max));
}

/**
 ** binary_tree_is_bst - Checks if a binary tree is a valid binary search tree.
 ** @tree: A pointer to the root node of the tree to check.
 **
 ** Return: 1 if tree is a valid BST, and 0 otherwise
 **/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}

