package review;

public class Circle extends Shape {
	
	private int radius;
	
	public Circle() {
		
	}
	public Circle(String name, int radius) {
		super(name);
		this.radius = radius;
	}
	
	@Override
	public void draw() {
		// TODO Auto-generated method stub
		super.draw();
		System.out.println("반지름이"+radius+"인 원을 그린다.");
	}

	@Override
	public void calculateArea() {
		// TODO Auto-generated method stub
		System.out.println("반지름이"+radius+"인 원의 넓이는"+(radius*radius*pi));
	}

	@Override
	public void calculateRound() {
		// TODO Auto-generated method stub
		System.out.println("반지름이"+radius+"인 원의 둘레는"+(radius*2*pi));
	}
	
	
	
	
	
}
