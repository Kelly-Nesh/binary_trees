#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

int height(binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 If tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, balance;

	if (!tree)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	balance = left - right;
	return (balance);
}

/**
 * height - get the height of binary tree
 * @tree: node to get height for
 * Return: height of tree
 */

int height(binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = right = 0;

	left = height(tree->left) + 1;
	right = height(tree->right) + 1;
	if (left > right)
		return (left);
	else
		return (right);
}
