#include "binary_trees.h"

/**
 * binary_tree_is_root - A function checks if a given node is root
 * @node: the node to be checked
 *
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && !node->parent)
		return (1);
	else
		return (0);
}
