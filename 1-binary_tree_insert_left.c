#include "binary_trees.h"

/**
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	parent->left = new;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	new->n = value;
}
