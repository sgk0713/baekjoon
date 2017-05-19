	#include <sys/types.h>
	#include <sys/ipc.h>
	#include <sys/msg.h>
	#include <stdio.h>
	#include <unistd.h>
	#include <stdlib.h>
	#include <string.h>
	#include <wait.h>
	#define PERM 0644
	#define MAXLINE sizeof(int)
	#define MSGTYPE 1
	#define DIGIT 10
	struct msgbuf {
	long mtype; /* message type, must be > 0 */
	char mtext[MAXLINE]; /* message data */
	};
	int main(int argc, char **argv) {
	int iMsgId, i, iMaxnum;
	struct msgbuf msgBuf;
	if (argc < 2) {
	printf("Usage : %s number\n", argv[0]);
	exit(1);
	}
	iMaxnum = (int)strtol(argv[1], NULL, DIGIT);
	msgq
	if ((iMsgId = msgget(IPC_PRIVATE, PERM | IPC_CREAT | IPC_EXCL)) < 0) {
	perror("msgget : ");
	exit(1);
	}
	if (fork() == 0) {
	for (i = 0; i <= iMaxnum; i++) {
	msgrcv(iMsgId, &msgBuf, MAXLINE, -iMaxnum, 0);
	printf("Child received msg : %d\n", (int)*msgBuf.mtext);
	}
	exit(0);
	}
	else {
	for (i = 0; i < iMaxnum; i++) {
	msgBuf.mtype = iMaxnum - i;
	memcpy((void *)msgBuf.mtext, (void *)&i, MAXLINE);
	msgsnd(iMsgId, &msgBuf, MAXLINE, 0);
	}
	wait(NULL);
	msgctl(iMsgId, IPC_RMID, NULL);
	}
	return 0;
	}