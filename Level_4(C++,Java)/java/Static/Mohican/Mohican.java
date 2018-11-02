public class Mohican {
    private int id;
    private Mohican prev;
    private Mohican next;
    private String name;
    private boolean isDead;
    
    private static int lastId = 0;
    private static Mohican lastMohican = null;
    
    public Mohican(String name) {
        isDead = false;
        lastId += 1;
        this.name = name;
        this.id = lastId;
        
        if ( lastMohican != null ) {
            this.prev = lastMohican;
            this.prev.next = this;
        } else {
            this.prev = null;
            this.next = null;
        }
        
        lastMohican = this;
        lastMohican.isDead = false;
    }
    
    public Mohican(Mohican copy) {
        isDead = false;
        lastId += 1;
        this.id = lastId;
        this.name = copy.name;
        
        if ( lastMohican != null ) {
            this.prev = lastMohican;
            this.prev.next = this;
        } else {
            this.prev = null;
            this.next = null;
        }
        
        lastMohican = this;
        lastMohican.isDead = false;
    }
    
    public int getId() {
        return this.id;
    }
    
    public String getName() {
        return this.name;
    }
    
    public static Mohican getLastMohican() throws NoOneMahicanException {
        if ( lastMohican == null ) {
            throw new NoOneMahicanException();
        }
        if ( lastMohican.isDead ) {
            throw new NoOneMahicanException();
        }
        
        return lastMohican;
    }
    
    public static void kill(Mohican target) {
        if( target.prev == null && target.next != null ) {
            target.next = null;
        } else if ( target.prev != null && target.next != null ) {
            target.prev.next = target.next;
            target.next.prev = target.prev;
        } else if ( target.prev != null && target.next == null ) {
            target.prev.next = null;
            lastMohican = target.prev;
        } else {
            lastMohican = null;
            lastMohican.isDead = true;
        }
        
        target.isDead = true;
        target = null;
    }
    
    public String toString() {
        StringBuffer out = new StringBuffer();
        
        if ( !isDead ) {
            out.append("Mohican ");
            out.append(this.name);
            out.append(" id: ");
            out.append(this.id);
        } else {
            out.append("Mohican ");
            out.append(this.name);
            out.append(" is dead id: ");
            out.append(this.id);
        }
        
        return out.toString();
    }
}
