#include "binary_trees.h"

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
		lhs = rhs + 1;
	else
		rhs = lhs + 1;

	return (rhs);
}
