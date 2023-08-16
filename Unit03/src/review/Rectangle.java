package review;

public class Rectangle extends Shape {
	
	private int width;
	private int height;
	
	public Rectangle() {
		
	}
	public Rectangle(String name, int width, int height) {
		super(name);
		this.width = width;
		this.height = height;
	}
	
	@Override
	public void draw() {
		// TODO Auto-generated method stub
		super.draw();
		System.out.println("사각형그리기");
	}
	@Override
	public void calculateArea() {
		// TODO Auto-generated method stub
		System.out.println("사각형 넓이 : "+(width*height));
	}
	@Override
	public void calculateRound() {
		// TODO Auto-generated method stub
		System.out.println("사각형 둘레 : "+((width+height)*2));
	}
	
	
	
	
	
	
}
