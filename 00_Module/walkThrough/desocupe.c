#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <stdlib.h>

struct pid_info
{
	int		*pid;
	char	*name;
	char	*root;
	int		stack;
};


long	get_pid_info(struct pid_info *ret, int pid) { return syscall(359, ret, pid); }

int	main(int ac, char **av) {
	int		r, pid;
	struct	pid_info *ret;

	if (ac == 1)
		pid = getpid();
	else
		pid = atoi(av[1]);
	ret = malloc(sizeof(struct pid_info));
	r = get_pid_info(ret, pid);
	printf("PId %n\nName %s\n", ret->pid, ret->name);
	return (0);
}
