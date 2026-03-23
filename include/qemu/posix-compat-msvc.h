#ifndef QEMU_WIN32_COMPAT_H
#define QEMU_WIN32_COMPAT_H

#include <io.h>
#include <process.h>

#define getpid _getpid

#define S_IWUSR 0200
#define S_IRUSR 0400
#define S_IRWXU 0700

#define R_OK 4
#define W_OK 2
#define X_OK R_OK
#define F_OK 0

#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

#define ssize_t size_t
#define pid_t uint32_t
#define mode_t int32_t

#endif /* QEMU_WIN32_COMPAT_H */
