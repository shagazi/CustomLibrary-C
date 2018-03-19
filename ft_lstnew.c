t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_node;

	if (!(struct t_list* new_node = (t_list*)malloc(sizeof(t_list)))
		return (NULL);
	new_node->next = NULL;

	if (content == NULL)
	{
		new_node->content = NULL;
		new_node->content_size = 0;
	}
	else
	{
		new_node->content = ft_memdup(content, content_size);
		new_node->content_size = content_size;
	}

	return (&new_node);
}
