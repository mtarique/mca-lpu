//Iterator Methods
import java.util.*;
class a
{
public static void main(String args[])
{
LinkedList<Integer> l1=new LinkedList<Integer>();
l1.add(10);
l1.add(22);
l1.add(36);
l1.add(40);
System.out.println(l1);
ListIterator<Integer> l=l1.listIterator();
System.out.println(l.next());
System.out.println(l.next());
System.out.println(l.hasPrevious());
System.out.println(l.next());
System.out.println(l.next());
System.out.println(l.hasNext());
}
}