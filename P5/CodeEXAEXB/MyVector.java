import java.util.ArrayList;

public class MyVector<E extends Number & Comparable<E>> {

    private ArrayList<Item<E>> storageM;

    SortStrategy s;

    public MyVector(int size){
        storageM = new ArrayList<>(size);
    }

    public void setTheArray(ArrayList<Item<E>> ref){
        this.storageM = ref;
    }

    public ArrayList<Item<E>> getTheArray(){
        return this.storageM;
    }

    public void add(Item<E> item){
        storageM.add(item);
    }

    public void display(){

        for(int i = 0; i < storageM.size(); i++){
            System.out.println(storageM.get(i).getItem());
        }
    }

    public void setSortStrategy(SortStrategy s){
        this.s = s;
    }

    public void performSort(){
        s.performSort(this.storageM);
    }
}