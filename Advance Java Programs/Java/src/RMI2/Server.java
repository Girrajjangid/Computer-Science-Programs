package RMI2;
import java.rmi.server.*;
import java.rmi.registry.*;

public class Server extends ImplementClass {
	 public Server() {
		 System.out.println("Constructor called server");
	 } 
	   public static void main(String args[]) { 
	      try { 
	         
	    	  ImplementClass obj = new ImplementClass(); 
	    
	          Hello stub = (Hello) UnicastRemoteObject.exportObject(obj, 0); //its like creating reference for registry  
	       
	          LocateRegistry.getRegistry().bind("Hello", stub);  
	         
	         System.err.println("Server ready"); 
	      } catch (Exception e) { 
	         System.err.println("Server exception: " + e.toString()); 
	         e.printStackTrace(); 
	      } 
	   } 
}
