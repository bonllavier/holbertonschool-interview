#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**                                                                                                                                                                                                   *insert_node - insert                                                                                                                                                                                *@head: head                                                                                                                                                                                         *@number: number to be inserted                                                                                                                                                                      *Return: address.                                                                                                                                                                                    */
listint_t *insert_node(listint_t **head, int number)
{
        listint_t *new_head = malloc(sizeof(listint_t));
        listint_t *tmp = *head;

        if (new_head == NULL || !number || head == NULL)
        {
                return (NULL);
        }
        if (tmp == NULL)
        {
                new_head->n = number;
                new_head->next = NULL;
                return (new_head);
        }
        if (number == 0)
        {
                new_head->n = number;
                new_head->next = tmp;
                (*head) = new_head;
                return (*head);
        }
        while (tmp->next)
        {
                if (number > tmp->n)
                {
                        new_head->n = number;
                        new_head->next = tmp->next;
                        tmp->next = new_head;
                        return (new_head);
                }
                tmp = tmp->next;
        }
        new_head->n = number;
        new_head->next = NULL;
        tmp->next = new_head;
        return (new_head);
}