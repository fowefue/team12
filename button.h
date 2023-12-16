#ifndef _BUTTON_H_
#define _BUTTON_H_
#define MESSAGE_ID 1122
typedef struct
{
long int messageNum;
int keyInput;
int pressed;
} BUTTON_MSG_T;
int buttonInit(void);
int buttonExit(void);
void* buttonThFunc(void* arg);
#endif
<<<<<<< HEAD
=======

>>>>>>> 720fb7ac5e9a400d191b5c364d4f2a7176a714c2
