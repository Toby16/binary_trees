#include "binary_trees.h"

/**
 * binary_tree_insert_right - function
 *	- returning value of type 'binary_tree_t *'
 *	- inserts a node as the right-child of another node
 * @parent: argument of type 'binary_tree_t *'
 *	-  pointer to the node to insert the left-child in
 * @value: argument of type 'int'
 *	- value to store in the new node
 * Return: pointer to the created node on success
 *	else, NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
