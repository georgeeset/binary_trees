#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child ina binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t rhs, lhs;

	if (!tree)
		return (0);
	rhs = binary_tree_nodes(tree->right);
	lhs = binary_tree_nodes(tree->left);

	/*increment if atleast one child is presentin current node*/
	if (tree->left || tree->right)
		return (rhs + lhs + 1);
	return (rhs + lhs);
}
