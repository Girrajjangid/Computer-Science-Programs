package unit_1;
import java.sql.*;
public class JBConnect {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Connection con= null;
		Statement stmt = null;
		ResultSet rs=null;
		Boolean b = null;
		//String str = "Select * from std_info";
		String str = "Insert into std_info values(7,'vikram','678','delhi')";
		
		try {

			   //Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
			con = DriverManager.getConnection("jdbc:ucanaccess://D://Programs//Programs//DataBaseAdv_Java//Database1.accdb");
			stmt = con.createStatement();
			//rs = stmt.executeQuery(str);
			b = stmt.execute(str);
			System.out.println(b);
			/*
			 * while(rs.next()) { System.out.print(rs.getInt(1)+ "   ");
			 * System.out.print(rs.getString(2)+"  ");
			 * System.out.print(rs.getString(3)+"  "); System.out.println(rs.getString(4));
			 * 
			 * }
			 */
		}catch(Exception e) {
			System.out.println(e.getMessage());
		}
		}

}
