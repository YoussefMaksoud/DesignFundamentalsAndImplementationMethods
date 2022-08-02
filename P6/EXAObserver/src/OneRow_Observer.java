import java.util.ArrayList;

//concrete observer class 3
public class OneRow_Observer implements Observer{

    private DoubleArrayListSubject subject;

    public OneRow_Observer(Subject subject) {
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

        System.out.println("\n\nNotification to One-Row table observer: Data Changed:");

        for(int i = 0; i < subject.data.size(); i++){

            System.out.print(subject.data.get(i) + "  ");

        }
    }
}
