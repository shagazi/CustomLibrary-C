void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;

	current = (*alst);
	del((current->content, current->content_size));
	free(current);
	current = NULL;
}
