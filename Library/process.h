#ifndef PROCESS_H
#define PROCESS_H

struct process {
    int id;
    void *bytes;
};

void initProcessManager();
void spawnProcessZero();

#endif