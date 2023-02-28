#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: a pointer to a the new node or null on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *swap;
	newNode = malloc(sizeof(binary_tree_t));

	newNode->parent = NULL;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent == NULL)
	{
		parent = newNode;
		parent->n = value;
		return parent;
	}
	else
	{
		swap = parent;
		while (1){
			parent = swap;
			if (value < parent->n)
			{
				swap = parent->left;
				if (swap == NULL)
				{
					swap = newNode;
					swap->parent = parent;
					swap->n = value;
					return swap;
				}
			}
			else
			{
				swap = parent->right;
				if (swap == NULL)
				{
					swap = newNode;
					swap->parent = parent;
					swap->n = value;
					return swap;
				}
			}
		}
	}
}
