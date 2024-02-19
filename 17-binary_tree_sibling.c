#include "binary_trees.h"

/**
 * binary_tree_sibling - A  function that finds a sibling
 * @node: A pointer to the node to find it's sibling
 *
 * Return: A pointer to the sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node == node->parent->right)
	{
		return (node->parent->left);
	}
	else if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
		return (NULL);
}
