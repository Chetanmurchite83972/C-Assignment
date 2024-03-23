public class Q7 {
    public static void main(String[] args) {
        if(args.length > 0) {
            for(int i = 0; i < args.length; i++) {
                int num = Integer.parseInt(args[i]);
                System.out.println("Table for " + num + ":");
                for(int j = 1; j <= 10; j++) {
                    System.out.println(num + " * " + j + " = " + num * j);
                }
                System.out.println();
            }
        } else {
            System.out.println("Please provide numbers as command line arguments.");
        }
    }
    
}
