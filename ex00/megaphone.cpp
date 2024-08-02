#include<iostream>
#include<cstring>

int main(int argc, char **argv) 
{
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int i;
	size_t j;
	for(i = 1; i < argc; i++)
	{
			for(j=0; j< strlen(argv[i]); j++)
			{
				char ch =toupper(argv[i][j]);
				std::cout << ch;
			}
	}
	std::cout << "" <<std::endl;
	return (0);
} 
