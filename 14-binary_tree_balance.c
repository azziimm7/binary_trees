#include "binary_trees.h"

/**
 * tree_height - A function measures tree height as int
 * @tree: pointer to root node of the binary tree
 *
 * Return: height as int
 */

int tree_height(const binary_tree_t *tree)
{
	int left_subtree, right_subtree;

	if (tree)
	{
		left_subtree = tree_height(tree->left) + 1;
		right_subtree = tree_height(tree->right) + 1;

		return (left_subtree > right_subtree ? left_subtree : right_subtree);
	}
	return (0);

}


/**
 * binary_tree_balance - A function measures the blancec factor of a tree
 * @tree: A pointer to the root node of the binary tree
 *
 * Return: The blance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_subtree = 0;
	int right_subtree = 0;
	int balance_factor;

	if (!tree)
	{
		return (0);
	}
	else
	{
		left_subtree = tree_height(tree->left);
		right_subtree = tree_height(tree->right);
		balance_factor = left_subtree - right_subtree;

		return (balance_factor);
	}
}
