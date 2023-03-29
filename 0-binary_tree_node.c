#include "binary_trees.h"

/**
 * binary_tree_node - Function of type 'binary_tree_t *'
 *	- creates a binary tree node
 * @parent: argument of type 'binary_tree_t *'
 *	- a pointer to the parent node of the node to create
 * @value: argument of type 'int'
 *	- value to put in the new node
 * Return: a pointer to the new node on success
 *	else, return NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = value;
		newnode->parent = parent;
		newnode->left = NULL;
		newnode->right = NULL;
	}

	return (newnode);
}
