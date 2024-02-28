#include "binary_trees.h"

/**
 ** is_full_recursive - Checks if a binary tree is full recursively.
 ** @tree: A pointer to the root node of the tree to check.
 **
 ** Return: If tree is not full, 0. Otherwise, 1.
 **/
int is_full_recursive(const binary_tree_t *tree)
{
	if (!tree)
		return 1;

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return 0;

	return is_full_recursive(tree->left) && is_full_recursive(tree->right);
}

/**
 ** binary_tree_is_full - Checks if a binary tree is full.
 ** @tree: A pointer to the root node of the tree to check.
 **
 ** Return: If tree is NULL or is not full - 0. Otherwise - 1.
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	return !tree ? 0 : is_full_recursive(tree);
}

