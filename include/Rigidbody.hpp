#ifndef RIGIDBODY_INCLUDE
#define RIGIDBODY_INCLUDE

#include <SFML/System/Vector2.hpp>
#include "DrawTransform.hpp"

class Rigidbody : public DrawTransform
{
public:
	Rigidbody();
	Rigidbody(int raio);
	void setRaio(int raio);
	int getRaio();
	virtual sf::Vector2f colision(Rigidbody* another);
	void setNLados(int numero);
	int getNLados();

	// Função deve ser chamada por quem colidiu com este corpo passando a si mesmo como parametro
	virtual void onColision(Rigidbody* objeto_que_sofrera_esta_colisao); 

private:
	int raio_colisao;
	int n_lados;
};

#endif
