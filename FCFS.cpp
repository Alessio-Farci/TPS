//First Come First Served Algorithm
//Author: Alessio Farci

 #include <iostream>
 #include <stdlib.h>
    int main()
{
    int i;
    int ProcessCount;

    std::cout << "Insert the number of process: " << std::endl;
    std:: cin >> ProcessCount;

    int burstTime[ProcessCount];
    int WaitingTime[ProcessCount];
    int TournaroundTime[ProcessCount];

    for(i=0;i<ProcessCount;i++)
    {
    std::cout << " Insert the burst time of the Process [: " << (i+1) << "]" << std::endl;
    std:: cin >> burstTime[i];

    std::cout << " Insert the waiting time of the Process [: " << (i+1) << "]" << std::endl;
    std:: cin >> WaitingTime[i];

    TournaroundTime[i]= burstTime[i] + WaitingTime[i];

    std::cout << "The TournaroundTime of the Process [: " << (i+1) << "] is: " << std::endl;
    std::cout << " " << TournaroundTime[i] << std::endl;
    std::cout << std::endl;
    }

 system("pause");
}
