#include "binary_trees.h"

/**
 * binary_tree_leaves - A function counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: the leaves count
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tree_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->right && !tree->left)
	{
		return (1);
	}

	tree_leaves += (binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));

	return (tree_leaves);
}



