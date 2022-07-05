Click PLC Production Rate Calculation

Program Sample

Many times you need a simple rate per second, minute or hour for the products being produced. This can easily be programmed in the Click PLC.
The 1 second pulse bit will be our product being produced. This can come from a sensor on the machine to see the widgets. 
This program will calculate the rate of widgets per minute. The time per widget is from the leading edge of the input to the next leading edge of the input.
When our input first turns on (leading edge) we will take the current time and store this in DS1. This will display the time per widge. The timer is then reset to 0.
Our calculation for rate will be product (widgets) per minute
1 second = 1000 milliseconds
60 seconds (1 minute) = 60000 milliseconds
60,000 / Current time per product = Products per minute 
This is the formula in the Click PLC math instruction

Programming and examples of the Click and Click PLUS PLC series can be found at this URL:
https://accautomation.ca/series/click-plc/

https://accautomation.ca/click-plc-timers-and-counters/

Regards,
Garry
ACC Automation