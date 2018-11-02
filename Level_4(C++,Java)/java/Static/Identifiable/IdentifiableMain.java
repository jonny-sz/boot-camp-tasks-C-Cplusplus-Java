public class IdentifiableMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Identifiable a = new Identifiable();
        Identifiable b = new Identifiable();
        Identifiable c = new Identifiable();
        Identifiable d = new Identifiable();
        Identifiable e = new Identifiable();
        
        System.out.println("a (id): " + a.getId());
        System.out.println("b (id): " + b.getId());
        System.out.println("c (id): " + c.getId());
        System.out.println("d (id): " + d.getId());
        System.out.println("e (id): " + e.getId());
    }
}
