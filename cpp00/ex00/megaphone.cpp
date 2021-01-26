#include <iostream>
#include <string>

void		megaphone(std::string arg)
{
	size_t	i;
	char	c;

	i = 0;
	while (i < (arg.size()))
	{
		c = arg[i];
		if (c >= 97 && c <= 122)
			c -= 32;
		std::cout << c;
		i++;
	}
}

int		main(int argc, char** argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
			megaphone(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}
