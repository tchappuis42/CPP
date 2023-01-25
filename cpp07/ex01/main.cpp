#include "iter.hpp"

int main()
{
	int tab[] = {12, -214748, 12, 0};
	float tabe[] = {42.42, 24.24, -63.3};

	iter<int>(tab, 4, print<int>);
	iter<float>(tabe, 3, print<float>);
}
