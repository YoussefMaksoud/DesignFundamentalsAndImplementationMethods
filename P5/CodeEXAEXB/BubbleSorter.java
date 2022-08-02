import java.util.ArrayList;

public class BubbleSorter<E extends Number & Comparable<E>> implements SortStrategy {

    public BubbleSorter(){}

    @Override
    public void performSort(ArrayList toSort) {
        int newSize = toSort.size();
        for(int i = 0; i < newSize - 1; i++){
            for(int j = 0; j < newSize - i - 1; j++){
                Item<E> before = (Item<E>) toSort.get(j);
                Item<E> after = (Item<E>) toSort.get(j+1);
                if(before.getItem().compareTo(after.getItem()) > 0){
                    Item<E> temp = before;
                    toSort.set(j, after);
                    toSort.set(j + 1, temp);
                }
            }
        }
    }
}
