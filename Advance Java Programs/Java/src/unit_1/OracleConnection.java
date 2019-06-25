package unit_1;

import java.sql.*;

public class OracleConnection {

	public static void main(String[] args) {
		try{
			String str = "select * from emp";
			
		Class.forName("oracle.jdbc.driver.OracleDriver");  
		Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","oracle");  
		Statement stmt=con.createStatement();  
		ResultSet rs=stmt.executeQuery(str);  
		
		while(rs.next())  
		System.out.println(rs.getInt(1)+"  "+rs.getString(2)+"  "+rs.getString(3));  
		  con.close();  
		  
		}
	catch(Exception e){ System.out.println(e);}  
		    
	}

}
