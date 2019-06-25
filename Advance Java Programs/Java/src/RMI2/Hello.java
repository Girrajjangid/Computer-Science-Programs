package RMI2;
import java.rmi.*;

//Creating Remote interface for our application 
public interface Hello extends Remote {  

	void printMsg() throws RemoteException;  

}