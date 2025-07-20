import java.util.Scanner;

public class mainEx {

    public static void main(String[] args) {
        int a, b;
        String c;
        Scanner sc = new Scanner(System.in);

        System.out.println("첫 번쨰 수 입력");
        a = sc.nextInt();

        System.out.println("+, -, X, / 입력");
        c = sc.next();

        System.out.println("두 번쨰 수 입력");

        b = sc.nextInt();

        if (c.equals("+")) {
            plus p = new plus();
            p.plus(a, b);
        } else if (c.equals("-")) {
            minus m = new minus();
            m.minus(a, b);

        } else if (c.equals("X || x")) {
            mul mul = new mul();
            mul.mul(a, b);

        } else if (c.equals("/")) {
            div d = new div();
            d.div(a, b);

        } else
            System.out.println("잘못 입력 !");
    }
}
