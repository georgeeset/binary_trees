#include "binary_trees.h"
/**
 * binary_tree_balance- measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: int balanace or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	/*if tree->left exists, call height func on that side, cast to int */
	left = (tree->left) ? (int)binary_tree_height(tree->left) : -1;

	/*if tree->right exists, call height func for it as welli, cast to int*/
	right = (tree->right) ? (int)binary_tree_height(tree->right) : -1;
	/* get balance */
	return (left - right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure height
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rhs, lhs;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	rhs = binary_tree_height(tree->left);
	lhs = binary_tree_height(tree->right);

	/*merge by taking the highest value*/
	if (rhs > lhs)
		lhs = rhs;
	else
		rhs = lhs;

	return (rhs + 1);
}
