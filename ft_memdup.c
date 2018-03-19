void ft_memdup(const void *ptr, size_t size)
{
	void *copiedstring;

	if(!(copiedstring = (void *)malloc(sizeof(size))
		return NULL;
	ft_mempy(copiedstring, ptr, size);
	return (copiedstring);
}
