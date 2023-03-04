#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary_tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: Null if tree is null or number of leaves (nodes without children)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lhs = 0;
	size_t rhs = 0;

	if (!tree)
		return (0);
	lhs = binary_tree_leaves(tree->left);
	rhs = binary_tree_leaves(tree->right);

	if (!tree->right && !tree->left)
		return (lhs + rhs + 1);
	return (lhs + rhs);
}
