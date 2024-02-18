#include "binary_trees.h"

/**
 * binary_tree_delete - A function deletes an entire binary tree
 * @tree: the root node of the tree to be deleted
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);

		free(tree);

		if (tree == NULL)
			return;
	}
}
