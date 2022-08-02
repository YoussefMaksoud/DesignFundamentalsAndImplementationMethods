import java.util.ArrayList;

//concrete observer class 2
public class ThreeColumnTable_Observer implements Observer{

    private DoubleArrayListSubject subject;

    public ThreeColumnTable_Observer(Subject subject) {
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

        System.out.println("\n\nNotification to Three-Column table observer: Data Changed:");

        for(int i = 0, j = 0; i < subject.data.size(); i++, j++){

            if(j == 3){
                j = 0;
                System.out.println('\n');
            }

            System.out.print(subject.data.get(i) + "  ");

        }
    }
}
