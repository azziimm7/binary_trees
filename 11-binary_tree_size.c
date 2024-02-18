#include "binary_trees.h"

/**
 * binary_tree_size - A function measures the size of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	tree_size += (binary_tree_size(tree->left) + binary_tree_size(tree->right));

	tree_size++;

	return(tree_size);
}

