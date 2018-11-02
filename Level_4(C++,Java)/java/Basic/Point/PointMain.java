public class PointMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Point a = new Point();
        Point b = new Point(0.5, 0.5);
        Point c = new Point(2, 2);
        
        System.out.println("a " + a);
        System.out.println("b " + b);
        System.out.println("c " + c);
        
        if ( a.equals(b) ) {
            System.out.println("Points " + a + " and " + b + " are equals.");
        } else {
            System.out.println("Points " + a + " and " + b + " are not equals.");
        }
        
        c = a.clone();
        
        c.setX(3);
        
        System.out.println("a " + a);
        System.out.println("b " + b);
        System.out.println("c " + c);
    }
}
