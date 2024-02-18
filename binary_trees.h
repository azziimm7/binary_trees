#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <limits.h>


/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;


/* binary search tree */
typedef struct binary_tree_s bst_t;

/* AVL tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* function prototype */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);

/**
 * binary_tree_is_leaf - A function checks if a node is leaf
 * @node: the node to be checked
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_is_root - A function checks if a given node is root
 * @node: the node to be checked
 *
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node);

/*
 * binary_tree_preorder - A function goes through the binary tree
 * using preorder traversal
 * @tree: A pointer to the root of the tree
 * @func: A pinter to a function that calls for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_inorder - A function goes through a binary tree in
 * an in-order traversal
 * @tree: the root node of the binary tree
 * @func: A pointer to the function that calls for each node
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/*
 * binary_tree_postorder - A function goes through binary tree using
 * postorder traversal
 * @tree: A pointer to the root node of the tree
 * @func: A pointer to a function calls for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_height - A function measures the hieght of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_size - A function measures the size of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_leaves - A function counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: the leaves count
 */

size_t binary_tree_leaves(const binary_tree_t *tree);

/**
 * binary_tree_nodes - A function  counts nodes with atleast on child
 * in a tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree);

/**
 * tree_height - A function measures tree height as int
 * @tree: pointer to root node of the binary tree
 *
 * Return: height as int
 */

int tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
/**
 * binary_tree_balance - A function measures the blancec factor of a tree
 * @tree: A pointer to the root node of the binary tree
 *
 * Return: The blance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree);
/*
 * binary_tree_is_full - A function checks if the binary tree is full
 * @tree: A pointer to the root node of the tree
 *
 * Return: 1 if tree is full 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree);
#endif
