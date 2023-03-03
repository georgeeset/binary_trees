#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: a pointer to the node to measure the dept
 * Return: number of layers from top node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cnt = 0;

	if (!tree || !tree->parent)
		return (0);
	cnt = binary_tree_depth(tree->parent);
	return (cnt + 1);
}
