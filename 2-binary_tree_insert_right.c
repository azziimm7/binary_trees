#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as
 *  the right-child of another node If parent already has a right-child,
 *  the new node takes place
 *  @parent: A pointer to the parent node to insert right child in
 *  @value: The data to be stored in the new node
 *
 *  Return: A pointer to the new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);

	/* memory allocation */
	new_right = malloc(sizeof(binary_tree_t));
	if (!new_right)
		return (NULL);

	/* Intialize the node */
	new_right->n = value;
	new_right->parent = parent;
	new_right->left = NULL;
	new_right->right = NULL;

	/* if parent has a right node the new node takes place */
	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right->parent = new_right;
	}

	parent->right = new_right;

	return (new_right);
}

