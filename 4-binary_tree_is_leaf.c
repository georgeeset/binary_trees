#include "binary_trees.h"
/**
 * binary_tree_is_leaf- (node is last with no left/right in the tree)
 * @node: the node to check
 *
 * Return: 1 if leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return ((!node->left) && (!node->right));
}
