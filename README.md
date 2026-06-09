
  Question 1:https://onlinegdb.com/KSAYg87HQ

  Time Converter Program (C++)
Aim

To create a C++ program that converts:

Total seconds into HH:MM:SS format.
Hours, minutes, and seconds into total seconds.
Class Name

TimeConverter

Functions Used
1. secondsToTime(int totalSeconds)

Converts total seconds into hours, minutes, and seconds.

Formula:

Hours = Total Seconds ÷ 3600
Minutes = (Remaining Seconds) ÷ 60
Seconds = Remaining Seconds % 60
2. timeToSeconds(int hours, int minutes, int seconds)

Converts hours, minutes, and seconds into total seconds.

Formula:

Total Seconds = (Hours × 3600) + (Minutes × 60) + Seconds
Algorithm
For Seconds to Time
Input total seconds.
Calculate hours using division by 3600.
Calculate minutes from the remaining seconds.
Calculate remaining seconds.
Display time in HH:MM:SS format.
For Time to Seconds
Input hours, minutes, and seconds.
Convert all values into seconds.
Display the total seconds.
Sample Output
Enter total seconds: 3665
HH:MM:SS => 1:1:5

Enter hours: 2
Enter minutes: 30
Enter seconds: 15
Total seconds: 9015
