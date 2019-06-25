package socket_TCP_IP_one_way;
import java.net.*;
import java.io.*;

public class client {

	public static void main(String[] args) {
		Socket s=null;
		PrintWriter pw=null;
		String str="hi boy";
		try {
			//make a request for connection
			s=new Socket("localhost",1234);
			pw=new PrintWriter(s.getOutputStream());
			pw.write(str);
			pw.close();
			//s.close();
		} catch (Exception e) {
		System.out.println(e.getMessage());
		}
	}
}
