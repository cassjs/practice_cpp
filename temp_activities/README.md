# Practice - Sports Activities Based on Temp
**Author:**     Jessica Cassidy\
**Date:**       January 11, 2020

## Description: 
User is prompted to enter the current temp in Celsius, then that entry is converted to Fahrenheit. The program then determines a recommended sports exercise for the day based on given temperature. 
- Below 65 = ping pong
- 65 - 80 = tennis
- Above 80 = canoeing 

**Input:** Enter the current temperature in C:

**Output:** Based on the temperature entered, the sports exercise recommended for the day is:

## Pseudocode:
Input tempC "Enter the current temperature in C:"\
Display 'You entered °', tempC.\
Set tempF = (tempC * 9/5) +32\
Display tempC 'converted to °F is: °', tempF

Display 'Based on the temperature entered, the sports exercise recommended for the day is: '

if tempF < 65\
    Display 'ping pong'\
else if tempF >= 65 and <= 80\
    Display 'tennis'\
else if tempF > 80\
    Display 'canoeing'

## Program Output Examples:
Enter the current temperature in C: 18\
You entered 18.00 °C.\
18.00 °C converted to °F is: 64.40 °F.\
Based on the temperature entered, the sports\
exercise recommended for the day is: ping-pong

Enter the current temperature in C: 25\
You entered 25.00 °C.\
25.00 °C converted to °F is: 77.00 °F.\
Based on the temperature entered, the sports\
exercise recommended for the day is: tennis

Enter the current temperature in C: 30\
You entered 30.00 °C.\
30.00 °C converted to °F is: 86.00 °F.\
Based on the temperature entered, the sports\
exercise recommended for the day is: canoeing