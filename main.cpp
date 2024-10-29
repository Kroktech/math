#include <iostream>
#include<cmath>
struct avion
{
	float a;
	float b;
	float c;
	float h;

};
//void getpoint(float x, float a, float b, float c)
//{
//	int y = a * x * x + b * x + c;
//	std::cout << "je tire en : " << x <<";" << y << std::endl;
//}
//void getracine(float a, float b, float c, float d)
//{
//	if (a == 0)
//		return;
//	if (d > 0)
//	{
//		float x1 = (-b - sqrt(d)) / (2 * a);
//		float x2= (-b + sqrt(d)) / (2 * a);
//		getpoint(x1, a, b, c);
//		getpoint(x2, a, b, c);
//	}
//	else if (d == 0)
//	{
//		float x1 =  - b / (2 * a);
//		getpoint(x1, a, b, c);
//
//	}
//	else
//	{
//		
//			float alpha = -b / (2 * a);
//			float beta = a * alpha * alpha + b * alpha + c;
//			if (a < 0)
//			{
//
//				std::cout << "je tire en son maximum : " << alpha << ";" << beta;
//			}
//			else
//			{
//				std::cout << "je tire en son minimum : " << alpha << ";" << beta;
//			}
//		
//	}
//}
//void planeunderorontop(float a, float b, float c)
//{
//	if ((a * 10 *10 + b * 10 + c) > 0)
//	{
//		std::cout << "passe au dessus\n";
//	}
//	else if ((a * 10*10  + b * 10 + c) < 0)
//	{
//		std::cout << "passe en dessous\n";
//
//	}
//	else
//	{
//		std::cout << " collision\n ";
//	}
//
//}
//void fireplane(float a, float b, float c)
//{
//	float d = b*b - 4 * a * c;
//
//	getracine(a, b, c, d);
//
//}
//void getcoorodonate()
//{
//	avion avion;
//	std::cout << "entrez le a : "<< std::endl;
//	std::cin >> avion.a;
//	std::cout << "entrez le b : "<< std::endl;
//	std::cin >> avion.b;
//	std::cout << "entrez le c : " << std:: endl;
//	std::cin >> avion.c;
//	planeunderorontop(avion.a, avion.b, avion.c);
//	fireplane(avion.a, avion.b, avion.c);
//}
//int main()
//{
//	getcoorodonate();
//	
//	
//}
void getcoorodonate()
{
	avion avion;
	std::cout << "entrez le a : "<< std::endl;
	std::cin >> avion.a;
	std::cout << "entrez le b : "<< std::endl;
	std::cin >> avion.b;
	std::cout << "entrez le c : " << std:: endl;
	std::cin >> avion.c;
	std::cout << "entrez la hauteur du pont : " << std::endl;
	std::cin >> avion.h;
	Crossing_Bridge(avion.a, avion.b, avion.c, avion.h);
	/*planeunderorontop(avion.a, avion.b, avion.c);
	fireplane(avion.a, avion.b, avion.c);*/
}
void Crossing_Bridge(float a, float b, float c, float h)
{
	if (a >= 0)
	{
		std::cout << "le a doit etre negatif";
		return;
	}
	for (int i = h; i !=0; --i)
	{

	}

}
int main()
{
	getcoorodonate();
	
	
}
