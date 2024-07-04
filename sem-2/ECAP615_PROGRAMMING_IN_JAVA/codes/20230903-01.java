// linkedlist methods
import java.util.LinkedList;
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

l1.addFirst(60);
System.out.println("index="+l1.indexOf(22));
System.out.println("AddF= "+l1);
System.out.println(l1.contains(40));
l1.removeLast();
System.out.println("After Removal ="+l1);
}
}