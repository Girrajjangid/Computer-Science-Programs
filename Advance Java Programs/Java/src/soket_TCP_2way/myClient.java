package soket_TCP_2way;

import java.io.*;
import java.net.*;
public class myClient
{
 public static void main(String[] args) throws Exception 
{
Socket sock = new Socket("127.0.0.1", 3000);
BufferedReader keyRead = new BufferedReader(new InputStreamReader(System.in));
OutputStream ostream = sock.getOutputStream();
InputStream istream = sock.getInputStream();
 PrintWriter pwrite = new PrintWriter(ostream, true);  
 BufferedReader receiveRead = new BufferedReader(new InputStreamReader(istream));
 System.out.println("Start the chitchat, type and press Enter key");
 String receiveMessage, sendMessage;
 while(true) {
 sendMessage = keyRead.readLine();
 pwrite.println(sendMessage);
 pwrite.flush();
 if((receiveMessage = receiveRead.readLine()) != null)
 {
 System.out.println(receiveMessage); }
} 
} 
}   