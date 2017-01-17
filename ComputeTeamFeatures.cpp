#include <stdio.h>
#include <stdlib.h>
int main(){

}
void ComputeTeamFeatures(Team team[]){
	//incase we wanted to count them :D
	/*short teamposts[16]={0};
	//compute number of posts

	for(int i = 0;i<16;i++)
	{
		for(int j =0;i<team[i].s_playercount;j++)
		{
			if(team[i].player[j].post==<post>)
			{
				teamdefenders[i]++;
			}
		}
	}*/
	
	for(int i = 0;i<16;i++)
	{
		team[i].s_defencestrength=0;
		team[i].s_attackstrength=0;
		team[i].s_teamtotaltrength=0;
		team[i].s_midfieldstrength=0;
	} 
	//compute defence strength of teams
	for(int i = 0;i<16;i++)
	{
		for(int j =0;i<team[i].s_playercount;j++)
		{
			if(team[i].player[j].post==defender)
			{
			team[i].s_defencestrength+=team[i].player[j].s_form + team[i].player[j].s_skill + team[i].player[j].s_fitness;
			}
		}
	} 
	//compute attack strength of teams
	for(int i = 0;i<16;i++)
	{
		for(int j =0;i<team[i].s_playercount;j++)
		{
			if(team[i].player[j].post==forward)
			{
			team[i].s_attackstrength+=team[i].player[j].s_form + team[i].player[j].s_skill + team[i].player[j].s_fitness;
			}
		}
	}
	//compute midfield strength
	for(int i = 0;i<16;i++)
	{
		for(int j =0;i<team[i].s_playercount;j++)
		{
			if(team[i].player[j].post==Midfielder)
			{
			team[i].s_midfieldstrength+=team[i].player[j].s_form + team[i].player[j].s_skill + team[i].player[j].s_fitness;
			}
		}
	}
	//compute total strength
	for(int i = 0;i<16;i++)
	{
		for(int j =0;i<team[i].s_playercount;j++)
		{
			team[i].s_teamtotalstrength+=team[i].player[j].s_form + team[i].player[j].s_skill + team[i].player[j].s_fitness;
		}
	}
}