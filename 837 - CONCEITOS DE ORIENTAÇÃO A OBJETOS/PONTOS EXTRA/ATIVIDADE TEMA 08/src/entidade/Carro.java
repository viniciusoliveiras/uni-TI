package entidade;

public class Carro {
	private String modelo;
	private double velocidadeMax;

	public String getModelo() {
		return modelo;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public double getVelocidadeMax() {
		return velocidadeMax;
	}

	public void setVelocidadeMax(double velocidadeMax) {
		this.velocidadeMax = velocidadeMax;
	}

	public void andar(double velocidade) {
		if (velocidade < this.getVelocidadeMax()) {
			System.out.println("ANDEI!");
		} else {
			System.out.println("VELOCIDADE ACIMA DO PERMITIDO!");
		}
	}
}
