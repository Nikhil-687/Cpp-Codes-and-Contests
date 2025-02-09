typedef struct
{

    int * key;
    char * value;

}ht_item;
typedef struct
{

    int size;
    int count;
    ht_item** items;

}ht_hash_table;