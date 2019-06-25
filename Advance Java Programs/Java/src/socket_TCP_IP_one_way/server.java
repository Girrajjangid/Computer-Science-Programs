package socket_TCP_IP_one_way;
import java.net.*;
import java.io.*;
public class server {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Socket s=null;
		ServerSocket ss=null;
		String str=null;
		DataInputStream dis=null;
		try {
			ss =new ServerSocket(1234);
			s = ss.accept();
			dis = new DataInputStream(s.getInputStream());
			str = dis.readLine();
			System.out.println("Client say: "+str);
			
		} catch (Exception e) {
			// TODO: handle exception
		System.out.println(e.getMessage());
		}
	}

}
