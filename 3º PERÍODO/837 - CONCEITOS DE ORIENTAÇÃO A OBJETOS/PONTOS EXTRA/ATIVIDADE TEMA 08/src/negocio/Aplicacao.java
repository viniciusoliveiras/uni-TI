package negocio;

import entidade.*;

public class Aplicacao {

	public static void main(String[] args) {

		// System.out.println("EXECUNTANDO O MÉTODO MAIN!");

		Carro c = new Carro();

		c.setVelocidadeMax(70.0);
		c.andar(10.0);
	}

}
