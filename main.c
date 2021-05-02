#include <stdio.h>
#include <memory.h>

typedef struct contact_entry {
    char *full_name;
    size_t full_name_len;
    int contact_number;
    char *house_address;
    size_t house_address_len;
    int DOB;

    struct contact_entry *next; // Links to next item in linked list
} contact_entry_t;

contact_entry_t* head_of_list; // The first item of linked list

void add_to_list(contact_entry_t *item);

int main() {
    //contact_entry_t bob_miskertins = {
    //        .full_name = "Bob Miskertins"
    //};

    //contact_entry_t danny_fellows = {
    //        .full_name = "Danny Fellows"
    //};

    //add_to_list(&bob_miskertins);
    //add_to_list(&danny_fellows);

    //contact_entry_t *entry = head_of_list;

    //do {
    //    printf("%s\n", entry->full_name);
    //} while (NULL != (entry = entry->next));

    // MAIN MENU SCREEN //
    int input_selection;
    char isValid;

    printf("%s", "Press '1' to view Contact List,\n'2' to add a new entry,\n'3' to remove entry");

    while (1 == isValid) {

    }

    return 0;
}

void add_to_list(contact_entry_t *item) {
    if (NULL == head_of_list) {
        head_of_list = item; // If there is no l.l, create it, then set the head of the l.l to the first item
    } else {
        contact_entry_t* current_item = head_of_list;

        while (NULL != current_item->next) // While the next item in l.l is NOT null, goto the next item in the l.l
        {
            current_item = current_item->next;
        }
        current_item->next = item; // Add item to the l.l
    }
}
