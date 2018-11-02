public class VectorMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Vector a = new Vector();
        Vector b = new Vector(0.5, 0.5);
        Vector c = new Vector(2, 2);
        
        System.out.println("a " + a);
        System.out.println("b " + b);
        System.out.println("c " + c);
        
        if ( a.equals(b) ) {
            System.out.println("Vectors " + a + " and " + b + " are equals.");
        } else {
            System.out.println("Vectors " + a + " and " + b + " are not equals.");
        }
        
        c = a.clone();
        
        c.setX(3);
        
        System.out.println("a " + a);
        System.out.println("b " + b);
        System.out.println("c " + c);
        
        System.out.println("c + b = " + Vector.sum(c, b));
        System.out.println("c - b = " + Vector.diff(c, b));
        System.out.println(b.len());
    }
}
