import java.net.URL;

class UrlClass {
    public static void main(String[] args) {
        try {
            URL ip = new URL("https://nptel.ac.in/course.php");

            System.out.println("protocol: " + ip.getProtocol());
            System.out.println("hostname: " + ip.getHost());
            System.out.println("port number: " + ip.getPort());
            System.out.println("file name: " + ip.getFile());
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

/*
protocol: https
hostname: nptel.ac.in
port number: -1
file name: /course.php
 
*/
