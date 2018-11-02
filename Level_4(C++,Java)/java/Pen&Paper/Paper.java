public class Paper {
    private int maxSymbols;
    private int symbols;
    private StringBuffer content;
    
    public Paper(int maxSymbols) {
        this.maxSymbols = maxSymbols;
        this.symbols = 0;
        content = new StringBuffer();
    }
    
    public Paper() {
        this(4096);
    }
    
    public int getMaxSymbols() {
        return this.maxSymbols;
    }
    
    public int getSymbols() {
        return this.symbols;
    }
    
    public void addContent(String message) throws OutOfSpaceException {
        int freeSpace = this.maxSymbols - this.symbols;
    
        if ( this.symbols == this.maxSymbols ) {
            throw new OutOfSpaceException();
        }
        
        if ( message.length() <= freeSpace ) {
            this.content.append(message);
        } else {
            this.content.append(message.substring(0, freeSpace));
        }
        
        this.symbols = this.content.length();
    }
    
    public void show() {
        System.out.print("(" + this.symbols + "/" + this.maxSymbols + ")"); 
        System.out.println("  Text: [" + this.content + "]");
    }
}
