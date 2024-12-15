#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_trees_nodes - Counts the node with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 * return: Returns the number of nodes with at least 1 child, 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
