#include "binary_trees.h"

/*
 * binary_tree_insert_left - A function insert a node as left child
 * to another node
 * @parent: pointer to the node to insert the left chld in
 * @value: the data to be stored in the new node
 *
 * Return: A pointer to the new node or null if fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);
	/* memory allocation */
	new_left = malloc(sizeof(binary_tree_t));

	/* free memory */
	if (!new_left)
		return (NULL);


	/* intializing the node */
	new_left->n = value;
	new_left->parent = parent;
	new_left->left = NULL;
	new_left->right = NULL;

	/* if parent already have left node swap nodes */
	if (parent->left)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
	}
	parent->left = new_left;

	return (new_left);
}
