#include "binary_trees.h"
/**
 * binary_tree_inorder - A function goes through a binary tree in
 * an in-order traversal
 * @tree: the root node of the binary tree
 * @func: A pointer to the function that calls for each node
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
