#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root
 * root node usually have NULL parent
 *
 * @node: the node we're checking
 * Return: 1 if root otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!(node->parent));
}
