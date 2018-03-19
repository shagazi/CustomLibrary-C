void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *new_elementi;

	if(!(new_element = (t_list*)malloc(sizeof(t_list)))
		return NULL;
	if(*alst == NULl)
	{
		*alst=new;
		*alst->next = NULL;
	}
	else
	{
		new_element->data = new;
		new_element->next = *alst;
		*alst = new_element;
	}

