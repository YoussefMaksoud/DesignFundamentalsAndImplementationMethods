import java.util.ArrayList;

//concrete observer class 1
public class FiveRowsTable_Observer implements Observer {

    private DoubleArrayListSubject subject;

    public FiveRowsTable_Observer(Subject subject) {
        this.subject = (DoubleArrayListSubject) subject;
        this.subject.registerObserver(this);
        display();
    }

    @Override
    public void update(ArrayList<Double> oList) {
        subject.data = oList;
        display();
    }

    @Override
    public void display(){

        System.out.println("\n\nNotification to Five-Row table observer: Data Changed:");

        for(int i = 0; i < 5; i ++){
            for(int j = i; j < subject.data.size(); j+=5){
                System.out.print(subject.data.get(j) + "  ");

            }
            System.out.println('\n');
        }
    }
}
