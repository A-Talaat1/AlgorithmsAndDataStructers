/*Binary Search Algorithm "Divide & Conquer"*/
/*Array must be sorted*/
int BinarySearch(int *Array, int Size, int Element)
{
    int Low = 0, High = Size - 1;

        while (Low <= High)
        {
           int Mid = Low + (High - Low) / 2;

            if (Array[Mid] == Element)
            {
                return Mid;
            }
            else if (Array[Mid] > Element)
            {
                High = Mid - 1; /*Search in the left half*/
            }
            else if (Array[Mid] < Element)
            {
                Low = Mid + 1; /*Search in the right half*/
            }
        }

        return -1; /*Return -1 if not found*/
}