public class CountableMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Countable a = new Countable();
        Countable b = new Countable();
        Countable c = new Countable();
        Countable d = new Countable();
        Countable e = new Countable();
        
        System.out.println(Countable.total);
        
        Countable f = new Countable(e);
        
        f = a.clone();
        
        System.out.println(Countable.total);
    }
}
