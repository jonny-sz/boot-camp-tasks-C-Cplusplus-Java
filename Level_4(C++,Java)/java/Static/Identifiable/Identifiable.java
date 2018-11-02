public class Identifiable {
    private int id;
    private static int lastId = 0;
    
    public Identifiable() {
        lastId += 1;
        this.id = lastId;
    }
    
    public Identifiable(Identifiable copy) {
        lastId += 1;
        this.id = lastId;
    }
    
    public int getId() {
        return this.id;
    }
}
