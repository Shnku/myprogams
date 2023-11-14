import java.net.InetAddress;

public class InetaddressClas {
    public static void main(String[] args) {
        try {
            InetAddress ip = InetAddress.getByName("www.google.co.in");

            System.out.println("host name: " + ip.getHostName());
            System.out.println("ip address: " + ip.getHostAddress());
        } catch (Exception e) {
            // TODO: handle exception
        }
    }
}

// host name: www.google.co.in
// ip address: 216.239.38.120
