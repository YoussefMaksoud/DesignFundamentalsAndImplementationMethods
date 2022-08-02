import java.util.ArrayList;
//this is the headhunter class of the observer pattern

public class DoubleArrayListSubject implements Subject{

    protected ArrayList<Double> data;
    private ArrayList<Observer> oList;

    public DoubleArrayListSubject() {

        if(data == null){

            data = new ArrayList<Double>();
            oList = new ArrayList<Observer>();

        }

    }

    public void addData(Double data){

        this.data.add(data);
        notifyAllObservers();

    }

    public void setData(double newData, int index){

        this.data.set(index, newData);
        notifyAllObservers();

    }

    public void populate(double template[]){

        for(int i = 0; i < template.length; i ++){

            this.data.add(template[i]);

        }

    }

    public void display(){
        if(data.isEmpty()){
            return;
        }
        else{
            for(int i = 0; i < data.size(); i ++){
                System.out.println(data.get(i));
            }
        }

    }

    @Override
    public void registerObserver(Observer o) {
        oList.add(o);
    }

    @Override
    public void removeObserver(Observer o) {
        oList.remove(o);
    }

    @Override
    public void notifyAllObservers() {
        for(int i = 0; i < oList.size(); i++){
            oList.get(i).update(data);
        }
    }
}
