#include <stdio.h>

int main() { 
    int start , stop;                          // กำหนดค่า  start , stop
    
    printf("Enter start number: ");          //แสดงคำว่า Enter start number:
    scanf("%d", &start);                    //ป้อนค่า start
    printf("Enter stop number: ");         //แสดงคำว่า Enter stop number:
    scanf("%d", &stop);                   //ป้อนค่า stop

    if (start < stop)                   //กำหนดเงื่อนไข start < stop
    {
        printf("Start numbers is %d and stop number  is %d \n--------------\n", start, stop);
        printf("Sepuence from sart to stop; ");
        for (int i = start; i <= stop; i++) //กำหนด  i = ค่าที่จะป้อน start  , ค่า i  stop น้อยกว่าหรือเท่ากับ  , บวกค่าเพิ่มขึ้น 
        {
            if (i % 1 == 0)                //เงื่ออนไขเป็นจริงเสมอ เนื่องจาก จำนวนเต็มหาร 1 จพมีเศษเป็น 0 เสมอ
            {
         printf(" %d ", i );              //แสดงค่าของ i โดยเรียงลำดับ
            }
        }
    
        printf("\nThank you.\n");        //แสดงข้อความเมื่อสิ้นสุดลูป หรือลูปเงื่อนไขเป็นเท็จ
                                            
    return 0;
    
}
}   
