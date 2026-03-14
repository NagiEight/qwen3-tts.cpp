#ifndef WIN_FIX_RESOURCE_H
#define WIN_FIX_RESOURCE_H

// A fake struct to satisfy the compiler on Windows
struct rusage
{
    struct
    {
        long tv_sec;
        long tv_usec;
    } ru_utime;
    struct
    {
        long tv_sec;
        long tv_usec;
    } ru_stime;
    long ru_maxrss;
    long ru_ixrss;
    long ru_idrss;
    long ru_isrss;
    long ru_minflt;
    long ru_majflt;
    long ru_nswap;
    long ru_inblock;
    long ru_oublock;
    long ru_msgsnd;
    long ru_msgrcv;
    long ru_nsignals;
    long ru_nvcsw;
    long ru_nivcsw;
};

#define RUSAGE_SELF 0

// This tells the code that the function exists (even if it does nothing)
inline int getrusage(int who, struct rusage *usage)
{
    return 0;
}

#endif