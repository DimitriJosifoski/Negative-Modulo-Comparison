public class JavaModulo {
    public static void main(String[] args) {
        int[][] cases = {{7, 3}, {-7, 3}, {7, -3}, {-7, -3}};
        
        System.out.printf("%-12s | %s%n", "Expression", "Result");
        System.out.println("--------------------");
        
        for (int[] c : cases) {
            int a = c[0];
            int b = c[1];
            System.out.printf("%2d %% %2d      | %2d%n", a, b, a % b);
        }
    }
}