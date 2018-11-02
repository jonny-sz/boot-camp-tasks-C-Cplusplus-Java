public class PPMain {
    public static void main(String[] args) throws OutOfInkException, OutOfSpaceException {
        Paper paper = new Paper(15);
        Pen pen = new Pen(20);
        
        pen.write(paper, "Hi!");
        paper.show();
        
        System.out.println("Pen ink[" + pen.getInkAmount() + "/" + pen.getInkCapacity() + "]");
        System.out.println();
        
        pen.write(paper, " Hi");
        paper.show();
        
        System.out.println("Pen ink[" + pen.getInkAmount() + "/" + pen.getInkCapacity() + "]");
        System.out.println();
        
        pen.write(paper, " Hi");
        paper.show();
        
        System.out.println("Pen ink[" + pen.getInkAmount() + "/" + pen.getInkCapacity() + "]");
        System.out.println();
        
        pen.write(paper, " good  bye and goodbye");
        paper.show();
        
        System.out.println("Pen ink[" + pen.getInkAmount() + "/" + pen.getInkCapacity() + "]");
    }
}
