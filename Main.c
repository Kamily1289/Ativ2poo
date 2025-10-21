public class Main {
    public static void main(String[] args) {
        // Criação de um objeto da classe Porta
        Porta portaDaFrente = new Porta("Branca", 2.10, 0.90);

        // Imprimindo a representação textual do objeto antes da mudança
        System.out.println("Estado inicial da porta:");
        System.out.println(portaDaFrente.toString());
        // Ou simplesmente:
        // System.out.println(portaDaFrente);

        // Usando um método setter para abrir a porta
        System.out.println("\nAbrindo a porta...");
        portaDaFrente.setEstaAberta(true);

        // Usando um método setter para mudar a cor
        System.out.println("Pintando a porta...");
        portaDaFrente.setCor("Azul");

        // Imprimindo o estado atual da porta
        System.out.println("\nEstado atual da porta:");
        System.out.println(portaDaFrente.toString());

        // Usando métodos getters para obter e imprimir atributos específicos
        System.out.println("\nVerificando atributos específicos:");
        System.out.println("A cor da porta é: " + portaDaFrente.getCor());
        System.out.println("A porta está aberta? " + portaDaFrente.isEstaAberta());
    }
}
