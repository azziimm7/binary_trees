#include "binary_trees.h"

/**
 * binary_tree_height - A function measures the hieght of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height = 0;
	size_t l_height = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		r_height = binary_tree_height(tree->right) + 1;
		l_height = binary_tree_height(tree->left) + 1;
	}

	return ((l_height > r_height) ? l_height : r_height);
}
		

