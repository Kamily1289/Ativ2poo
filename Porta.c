public class Porta {
    // Atributos
    private String cor;
    private double altura;
    private double largura;
    private boolean estaAberta;

    // Construtor
    public Porta(String cor, double altura, double largura) {
        this.cor = cor;
        this.altura = altura;
        this.largura = largura;
        this.estaAberta = false; // Estado inicial da porta é fechada
    }

    // Métodos Getters
    public String getCor() {
        return cor;
    }

    public double getAltura() {
        return altura;
    }

    public double getLargura() {
        return largura;
    }

    public boolean isEstaAberta() {
        return estaAberta;
    }

    // Métodos Setters
    public void setCor(String cor) {
        this.cor = cor;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }

    public void setLargura(double largura) {
        this.largura = largura;
    }

    public void setEstaAberta(boolean estaAberta) {
        this.estaAberta = estaAberta;
    }

    // Método toString() para representação textual do objeto
    @Override
    public String toString() {
        return "Porta{" +
               "cor='" + cor + '\'' +
               ", altura=" + altura +
               ", largura=" + largura +
               ", estaAberta=" + estaAberta +
               '}';
    }
}
