package review;

public class ShapeMain {
	public static void main(String[] args) {
		Circle c1 = new Circle("원", 4);
		c1.calculateArea();
		c1.calculateRound();
		
		Rectangle r1 = new Rectangle("사각형", 2, 4);
		r1.calculateArea();
		r1.calculateRound();
		
		
		
	}
}
