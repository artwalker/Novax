#ifndef LIST_H
#define LIST_H

/*
 * Definition of the only type of object that a list can ccontain.
 */
struct xLIST;
struct xLIST_ITEM
{
    /**< The value being listed.  In most cases this is to sort the list 
     * in ascending order. */
    TickType_t xItemValue;
    /**< Pointer to the next ListItem_t in the list. */
    struct xLIST_ITEM * pxNext;
    /**< Pointer to the previous ListItem_t int list. */
    struct xLIST_ITEM * pxPrevious;
    /** Pointer to the object (normally a TCB) that contains the list item.
    There is therefore a two way link between the object containing 
    the list item and the list item itself. */
    void * pvOwner;
    /**< Pointer to the list in which this list item is placed (if any). */
    struct xLIST *pxContainer;
};
typedef struct xLIST_ITEM ListItem_t;

struct xMINI_LIST_ITEM
{
    TickType_t xItemValue;
    struct xLIST_ITEM *pxNext;
    struct xLIST_ITEM *pxPrevious;
};
typedef struct xMINI_LIST_ITEM MiniListItem_t;

/* 
 * Definition of the type of queue used by the scheduler.
 */
typedef struct xLIST
{
    volatile UBaseType_t uxNumberOfItems;
    /**< Used to walk through the list.  Points to the last item returned by 
     * a call to listGET_OWNER_OF_NEXT_ENTRY ().
     */
    ListItem_t * pxIndex;
    /**< List item that contains the maximum possible item value meaning it is
     * always at the end of the list and is therefore used as a marker.
     */
    MiniListItem_t xListEnd;
}List_t;
