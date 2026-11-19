#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int i;
	int j;
	

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				unsigned char ch = argv[i][j];
				std::cout << static_cast<char>(std::toupper(ch));
				j++;
			}
			i++;
		}
	}
	std::cout << '\n';
	return 0;
}
