#include "binary_trees.h"
/**
 * binary_tree_uncle - A function finds the uncle of the tree
 * @node: A pointer to the node to find it's uncle
 *
 * Return: A pointer to the node uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		if (node->parent == node->parent->parent->left)
		{
			return (node->parent->parent->right);
		}
		else if (node->parent == node->parent->parent->right)
		{
			return (node->parent->parent->left);
		}
		else
			return (NULL);
	}
	return (NULL);
}
