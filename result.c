#include<stdio.h>
struct product
{
    int id;
    char productname[50];
    int rate,qty,amt,billamt,netbill;
    float dis,gst;
};

int main()
{
    struct product st[4];
    int i;
    for(i=0;i<1;i++)
    {
        printf("enter id: ");
        scanf("%d",&st[i].id);
        printf("enter product name: ");
        scanf("%s",&st[i]. productname);
        printf("enter rate: ");
        scanf("%d",&st[i].rate);
        printf("enter qty: ");
        scanf("%d",&st[i].qty);
       
    }
    printf("\nid\tname\trate\tqty\tamt\tdis\tbillamt\tgst\tnetbill");
   
    for(i=0;i<1;i++)
    {
        st[i].amt = st[i].rate * st[i].qty;
        st[i].dis = st[i].amt * 5 / 100 ;
        st[i].billamt = st[i].amt - st[i].dis ;
        st[i].gst = st[i].billamt * 18 / 100 ;
        st[i].netbill = st[i].billamt - st[i].gst ;
        printf("\n%d\t%s\t%d\t%d\t%d\t%.2f\t%d\t%.2f\t%d",st[i].id,st[i].productname,st[i].rate,st[i].qty,st[i].amt,st[i].dis,st[i].billamt,st[i].gst,st[i].netbill);
    }
}