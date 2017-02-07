stack_element_t stack_multipop(stack_t *S,int k,int *p)
{
	if (stack_is_empty(S))
    {
        fprintf(stderr, "Error: Stack is empty\n");
        exit(1);
    }
    p=S->elements[S->top];
    if (k<S->max_size)
	{
    	S->elements[S->top=-k];
    }
    else
	{
    	S->elements[S->top=-1];
    }
}
