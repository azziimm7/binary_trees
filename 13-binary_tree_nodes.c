#include "binary_trees.h"

/**
 * binary_tree_nodes - A function  counts nodes with atleast on child
 * in a tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t tree_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right || tree->left)
	{
		tree_nodes++;
	}
	tree_nodes += (binary_tree_nodes(tree->right) +
			binary_tree_nodes(tree->left));

	return (tree_nodes);
}

