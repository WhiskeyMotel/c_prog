struct time
{
	int hours;
	int minutes;
	int seconds;
};

struct time time_delta(struct time t1, struct time t2)
{
	struct time t3;
	int temp1=0,temp2=0,i,delta=0;
	for(i=0;i<t1.hours;i++)
	{
		temp1+=3600;
	}
	for(i=0;i<t2.hours;i++)
	{
		temp2+=3600;
	}
	for(i=0;i<t1.minutes;i++)
	{
		temp1+=60;
	}
	for(i=0;i<t2.minutes;i++)
	{
		temp2+=60;
	}
	for(i=0;i<t1.seconds;i++)
	{
		temp1++;
	}
	for(i=0;i<t2.seconds;i++)
	{
		temp2++;
	}
	delta=temp2-temp1;
	if (delta<0)
	{
		delta=delta*(-1);
	}
	t3.hours=delta/3600;
	t3.minutes=(delta%3600)/60;
	t3.seconds=delta%60;
	return t3;
}
