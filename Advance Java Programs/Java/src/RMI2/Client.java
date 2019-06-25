package RMI2;
import java.rmi.registry.*;
public class Client {
public Client() {
	System.out.println("Client constructor called");
}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {	
		
			Hello stub = (Hello) LocateRegistry.getRegistry().lookup("Hello");
			stub.printMsg();
		
		}catch (Exception e) {
			System.err.println(e.getMessage());
			// TODO: handle exception
		}
	}

}
