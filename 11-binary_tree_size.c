#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: measured value or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lhs = 0;
	size_t rhs = 0;

	if (!tree)
		return (0);
	lhs += binary_tree_size(tree->left);
	rhs += binary_tree_size(tree->right);

	return (rhs + lhs + 1);
}
