/**
 * https://cplusplus.com/doc/tutorial/polymorphism/
 */

#include <iostream>

class Polygon {
	protected:
		int width, height;
	public:
		Polygon( void ) {
			std::cout << "Construct Poly\n";
		}
		~Polygon ( void ) {  std::cout << "DesTRUC Poly \n"; }
		void	set_values( int a, int b) {
		width = a; height = b; }
		virtual int	area( void ) = 0;  // Asi puede acceder des el PTR de Poly a las funciones miembros de sus herederos
};

class Rectangle : public Polygon {
	public:
		Rectangle ( void ) { std::cout << "Construct Rectangle\n";}
		~Rectangle ( void ) {  std::cout << "DesTRUC Rectangle \n"; }

		int	area() {
			return width*height;
		}
};

class Triangle : public Polygon {
	public:
		Triangle ( void ) { std::cout << "Construct Triangle\n";}
		~Triangle ( void ) {  std::cout << "DesTRUC Triangle \n"; }

		int	area() {
			return width*height / 2;
		}
};

int main( void ) {
	Rectangle	rect;
	Triangle	tri;
	//Polygon		poly; No puede ser instanciada por q es abstracta

	Polygon * ptr1 = &rect;
	Polygon * ptr2 = &tri;
	//Polygon * ptr3 = &poly;

	std::cout << "size Poly = " <<  sizeof(Polygon) << std::endl;


	// ptr1 y ptr2 son punteros de tipo Polygon y solo los
	// los miembros heredados de Polygon pueden ser accesibles
	// desde estos ptr y no aquellos miembros propios de Rec y Tri.
	ptr1->set_values(4, 5);
	ptr2->set_values(4,5);

	// Es por lo anterio que aqui no puedeo acceder desde el PTR;
	std::cout << ptr1->area() << std::endl;
	std::cout << tri.area() << std::endl;
	//std::cout << ptr3->area() << std::endl;
	return (0);

}
