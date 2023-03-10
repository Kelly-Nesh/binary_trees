#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts aq node as a left child of another node
 * @parent: a pointer to the node to insert the left child in
 * @value: the value to store in the new code
 * Return: NULL if parent is null of in case of failure or pointer to the
 * new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL || parent == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	if (parent->left)
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;
	}
	else
		newNode->left = NULL;
	parent->left = newNode;
	return (newNode);
}
