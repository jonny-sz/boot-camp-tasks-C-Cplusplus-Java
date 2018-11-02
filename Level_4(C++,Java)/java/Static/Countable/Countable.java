public class Countable implements Cloneable {
    public static int total = 0;
    
    public Countable() {
        total += 1;
    }
    
    public Countable(Countable copy) {
        total += 1;
    }
    
    public Countable clone() throws CloneNotSupportedException {
        return (Countable) super.clone();
    }
}
