package review;

public abstract class Shape {
	private String name;
	protected final static double pi = 3.14;
	protected static int shapeCnt;
	
	public Shape(){
		shapeCnt++;
	}
	public Shape(String name){
		this();
		this.name = name;
	}
	
	public void draw() {
		System.out.println(name + "도형그리기");
	}
	
	public abstract void calculateArea();
	public abstract void calculateRound();
	
}
