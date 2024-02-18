#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function checks if a node is leaf
 * @node: the node to be checked
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->right && !node->left)
		return (1);
	else
		return (0);
}
