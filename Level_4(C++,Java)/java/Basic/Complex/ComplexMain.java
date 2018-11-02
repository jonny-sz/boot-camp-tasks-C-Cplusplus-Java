public class ComplexMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Complex a = new Complex();
        Complex b = new Complex(6, 4);
        Complex c = new Complex(2, 3);
        
        System.out.println("a " + a);
        System.out.println("b " + b);
        System.out.println("c " + c);
        
        if ( a.equals(b) ) {
            System.out.println("Complex " + a + " and " + b + " are equals.");
        } else {
            System.out.println("Complex " + a + " and " + b + " are not equals.");
        }
        
        c = a.clone();
        
        System.out.println("a " + a);
        System.out.println("b " + b);
        System.out.println("c " + c);
        
        System.out.println("c + b = " + Complex.sum(c, b));
        System.out.println("c - b = " + Complex.diff(c, b));
        System.out.println("c * b = " + Complex.product(c, b));
        
        System.out.println("a " + a);
        System.out.println("b " + b);
        System.out.println("c " + c);
    }
}
