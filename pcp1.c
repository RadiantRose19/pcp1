char* maximumTime(char* time) {
if (time[0] == '?' && time[1] == '?')
{
	time[0] = '2';
	time[1] = '3';
}
if (time[0] == '?')
{
	if (time[1] >= '4')
		time[0] = '1';
	else
		time[0] = '2';
}
// if they are 'h?'
else if (time[1] == '?')
{
	if (time[0] == '2')
		time[1] = '3';
	else
		time[1] = '9';
}


// consider each possible case for the minute part
if (time[3] == '?')
	time[3] = '5';

if (time[4] == '?')
	time[4] = '9';

return time;
}
