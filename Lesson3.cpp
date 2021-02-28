#include <iostream>


int main (void)
{
{//Task1 
    int a, b, c, d;
	std::cout << "a = ";
	std::cin>> a;
	std::cout << "b = ";
	std::cin>> b;
	std::cout << "c = ";
	std::cin>> c;
	std::cout << "d = ";
	std::cin>> d;
	std::cout<< "a*(b + (c/d)) = "<<a*(b + (c*1.0)/d);
}
{//Task2
	int a;
	std::cout << "a = ";
	std::cin>> a;
	std::cout<<((a > 21) ? 2*(a - 21) : (a - 21))<<std::endl;
}
{//Task3
	extern int a, b, c, d;
	std::cout << "a = ";
	std::cin>> a;
	std::cout << "b = ";
	std::cin>> b;
	std::cout << "c = ";
	std::cin>> c;
	std::cout << "d = ";
	std::cin>> d;
	std::cout<< "a*(b + (c/d)) = "<<a*(b + (c*1.0)/d)<< std::endl;
}
{//Task4
	int M[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
	                   {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
	                   {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}};
	int* p[3][3] = {{M[0][0], M[0][1], M[0][2]},
		            {M[1][0], M[1][1], M[1][2]},
					{M[2][0], M[2][1], M[2][2]},
	};
	int** c[3] = {p[0], p[1], p[2]};
	std::cout<< *(*(*(c + 1) + 1) + 1) <<std::endl;
}
	return 0;

}