#include <unistd.h>

void	func(int *str)
{	
	if (str[1] == '3')
		str[1] = '1';
		//write(1, "foda se", 7);
}

int main()
{
	//int string[6] = "23yeff";
	int array[6] = { 1, 3, 4, 1, 5, 0};
	int *str = array;
	func(str);
	for (int i = 0 ; i <= 5 ;i++)
		write(1, &str[i], 1);
}
