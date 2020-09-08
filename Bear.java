package dp2;
import java.util.Scanner;
public class Bear extends GameObject {
	
	public Bear(int x, int y, int distance) {
		super(x,y,distance);		
	}
	
	@Override
	public void move() {
		px=x;
		py=y;
        Scanner sc = new Scanner(System.in);
		
		System.out.print("왼쪽(a), 아래(s), 위(d), 오른쪽(f) >> ");
		String inputChar = sc.next();

		if (inputChar.equals("a")){
			x=x-distance;			
		}
		else if (inputChar.equals("s")){
			y=y+distance;
		}
		else if (inputChar.equals("d")){
			y=y-distance;
		}
		else if (inputChar.equals("f")){
			x=x+distance;
		}
		}
	
	@Override
	public char getShape() {
		return 'B';
	}

}
