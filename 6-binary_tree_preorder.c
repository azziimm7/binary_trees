#include "binary_trees.h"

/*
 * binary_tree_preorder - A function goes through the binary tree
 * using preorder traversal
 * @tree: A pointer to the root of the tree
 * @func: A pinter to a function that calls for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);

		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}

}
