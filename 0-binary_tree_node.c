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
	if (parent == NULL)
	{
		parent = newNode;
		parent->n = value;
		return (parent);
	}
	else
	{
		swap = parent;
		while (1)
		{
			parent = swap;
			if (value < parent->n)
			{
				swap = parent->left;
				if (swap == NULL)
				{
					swap = insert_data(swap, newNode,
							parent, value, 0);
					return (swap);
				}
			}
			else
			{
				swap = parent->right;
				if (swap == NULL)
				{
					swap = insert_data(swap, newNode,
							parent, value, 1);
					return (swap);
				}
			}
		}
	}
	return (NULL);
}

binary_tree_t *insert_data(binary_tree_t *swp, binary_tree_t *new,
		binary_tree_t *prt, int n, int rl)
{
	swp = new;
	if (rl == 0)
		prt->left = swp;
	else
		prt->right = swp;
	swp->n = n;
	swp->parent = prt;
	swp->left = NULL;
	swp->right = NULL;
	return (swp);
}
