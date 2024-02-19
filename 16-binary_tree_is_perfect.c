#include "binary_trees.h"

/**
 * node_depth - find the depth of a node in a tree
 * @tree: A pointer to the node to find its depth
 *
 * Return: A node depth or NULL
 */
size_t node_depth(const binary_tree_t *tree)
{
	if (!tree)
        {
                return (0);
        }
        if (tree->parent == NULL)
        {
                return (0);
        }

        return (binary_tree_depth(tree->parent) + 1);
	}
}



/**
 * binary_tree_is_perfect - A function checks if a binary tree is perfet
 * @tree: A pointer to the root nod of th tree
 *
 * Return: 1 if tree perfect 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{


