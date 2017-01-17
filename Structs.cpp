typedef enum 
{
	Goalkeeper = 0,
	Defender,
	Forward,
	Midfielder,
}Post;
typedef struct
 {
	char c_nameplayer[20];
	short s_number;
	short s_age;
	Post post;
	short s_skill;
	short s_fitness;
	short s_form;
	short s_goalcount;
	short s_goalpasscount;
	short s_lastgameyellowcards;
	short s_lastgameredcards;
	short s_totalredcards;
	short s_totalyellowcards;
	short s_numforprogram;
}Player;
typedef struct
{
	char c_nameteam[15];
	Player player[50];
	short s_playercount;
	short s_score;
	short s_goalsfor;
	short s_goalsagainst;
	short s_goaldiffrence;//=s_golasfor-s_goalsagainst
	short s_defencestrength;
	short s_attackstrength;
	short s_midfieldstrength;
	short s_teamttotalstrength;
	short s_numforprogram;
	short s_gamewon;
	short s_gamelost;
	short s_gametied;
	short 

}Team;
typedef struct{
	Team team1;
	Team team2;
	short s_team1goals;
	short s_team2goals;
	short s_team1possesspercent;
	short s_team2possesspercent;
	short s_team1goalersnumforprogram[10];
	short s_team2goalersnumforprogram[10];
	short s_team1point;
	short s_team2point;
	short s_team1passgoalersnumforprogram[10];
	short s_team2passgoalersnumforprogram[10];
	short s_team1numofyellowcards;
	short s_team1yellownumfrprogram[30];
	short s_team1numofredcards;
	short s_team1rednumfrprogram[10];
	short s_team2numofyellowcards;
	short s_team2yellownumfrprogram[30];
	short s_team2numofredcards;
	short s_team2rednumfrprogram[10];
	Date date;
	GoalDetail team1goaldetail[10];
	GoalDetail team2goaldetail[10];
	short GameDone;
	short stadpopteam1;
	short stadpopteam1;
	//1 for host 2 for guest
}GameResult;

typedef struct{
	char c_GoalDetails[50];
}GoalDetail;

typedef struct {
	short day;
	short month;
	short year;
	short time;
}Date;