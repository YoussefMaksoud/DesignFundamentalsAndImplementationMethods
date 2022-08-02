import java.util.ArrayList;

public class SelectionSorter<E extends Number & Comparable<E>> implements SortStrategy {

    public SelectionSorter(){}

    @Override
    public void performSort(ArrayList toSort) {
        int newSize = toSort.size();
        int min;
        for(int i = 0; i < newSize - 1; i++){
            min = i;
            for(int j = i + 1; j < newSize; j++){
                Item<E> select = (Item<E>) toSort.get(j);
                Item<E> after = (Item<E>) toSort.get(min);
                if(select.getItem().compareTo(after.getItem()) < 0){
                    min = j;
                }
            }
            Item<E> temp = (Item<E>) toSort.get(i);
            toSort.set(i, toSort.get(min));
            toSort.set(min, temp);
        }
    }
}
