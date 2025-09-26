import java.util.Scanner;

public class CodigoAcesso {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o código de acesso: \n");
        String codigo = scanner.nextLine();

        if (codigo.equals("Admin123")) {
            System.out.println("✅ Bem-vindo, Administrador!");
        } else if (codigo.equals("User123")) {
            System.out.println("✅ Bem-vindo, Usuário!");
        } else {
            System.out.println("❌ Senha incorreta");
        }

        scanner.close();
    }
}