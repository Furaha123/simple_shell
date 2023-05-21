#include "shell.h"

/**
 * add_rvar_node - adds a variable at the end of a r_var list.
 * @head: head of the linked list.
 * @lvar: length of the variable.
 * @val: value of the variable.
 * @lval: length of the value.
 * Return: address of the head.
 */
r_var *add_rvar_node(r_var **head, int lvar, char *val, int lval)
{
	r_var *news, *temp;

	news = malloc(sizeof(r_var));
	if (news == NULL)
		return (NULL);

	news->len_var = lvar;
	news->val = val;
	news->len_val = lval;

	news->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = news;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = news;
	}

	return (*head);
}

/**
 * free_rvar_list - Frees a r_var list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_rvar_list(r_var **head)
{
	r_var *temp;
	r_var *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

