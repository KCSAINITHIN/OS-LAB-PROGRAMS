#include <stdio.h>

#define MAX_PROCESSES 10


void calculateTimes(int n, int burst_time[], int wait_time[], int turn_around_time[]) {
    int total_wait_time = 0, total_turnaround_time = 0;

    wait_time[0] = 0;
    turn_around_time[0] = burst_time[0];
    total_turnaround_time += turn_around_time[0];

    for (int i = 1; i < n; i++) {
        wait_time[i] = wait_time[i - 1] + burst_time[i - 1];
        total_wait_time += wait_time[i];
        turn_around_time[i] = wait_time[i] + burst_time[i];
        total_turnaround_time += turn_around_time[i];
    }

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", i + 1, burst_time[i], wait_time[i], turn_around_time[i]);
    }

    printf("\nAverage Waiting Time: %.2f\n", (float)total_wait_time / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_turnaround_time / n);
}

int main() {
    int system_burst_time[MAX_PROCESSES], user_burst_time[MAX_PROCESSES];
    int system_wait_time[MAX_PROCESSES], user_wait_time[MAX_PROCESSES];
    int system_turnaround_time[MAX_PROCESSES], user_turnaround_time[MAX_PROCESSES];
    int system_arrival_time[MAX_PROCESSES], user_arrival_time[MAX_PROCESSES];
    int n_system_processes, n_user_processes;

    printf("Enter the number of system processes: ");
    scanf("%d", &n_system_processes);

    printf("Enter the burst time and arrival time for system processes:\n");
    for (int i = 0; i < n_system_processes; i++) {
        printf("System Process %d: \n", i + 1);
        printf("Enter burst time: ");
        scanf("%d", &system_burst_time[i]);
        printf("Enter arrival time: ");
        scanf("%d", &system_arrival_time[i]);
    }

    printf("\nEnter the number of user processes: ");
    scanf("%d", &n_user_processes);

    printf("Enter the burst time and arrival time for user processes:\n");
    for (int i = 0; i < n_user_processes; i++) {
        printf("User Process %d: \n", i + 1);
        printf("Enter burst time: ");
        scanf("%d", &user_burst_time[i]);
        printf("Enter arrival time: ");
        scanf("%d", &user_arrival_time[i]);
    }


    printf("\nSystem Processes (FCFS Scheduling):\n");
    calculateTimes(n_system_processes, system_burst_time, system_wait_time, system_turnaround_time);

    printf("\nUser Processes (FCFS Scheduling):\n");
    calculateTimes(n_user_processes, user_burst_time, user_wait_time, user_turnaround_time);

    return 0;
}
