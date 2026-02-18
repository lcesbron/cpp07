#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename S, typename F>
void	iter(T* src, S const size, F fun(T&))
{
	for (S i = 0; i < size; i++)
	{
		fun(src[i]);
	}
}

#endif
