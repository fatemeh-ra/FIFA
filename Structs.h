#include <stdio.h>
typedef enum
{
	Goalkeeper = 0,
	Defender,
	Midfielder,
	Forward,
}Post;
typedef enum
{
	_5_3_2_ = 0,
	_4_3_3_,
	_4_4_2_,
}System;

typedef struct {
	char c_GoalDetails[50];
}GoalDetail;


typedef struct {
	short day;
	short month;
	short year;
	short time;
}Date;
typedef struct {
	char detail[30];
	short numofchanges;
}ChangeDetail;
//extras
typedef struct {
	char c_firstyellowcardgottime[6];
	char c_secondyellowcardgottime[6];
}yellowcardgottime;

typedef struct {
	char c_redcardgottime[6];
}redcardgottime;

typedef struct {
	char c_changedtime[6];
	short s_;
}changedtime;

typedef struct
{
	char c_nameplayer[20];//read from defult
	short s_number;//read from defult
	short s_age;//read from defult
	Post post;//read from defult
	short s_skill;//read from defult
	short s_fitness;//read from defult
	short s_form;//read from defult
	short s_goalcount;//intialize to 0
	short s_goalpasscount;//intialize to 0
	short s_lastgameyellowcards;//intialize to 0
	short s_lastgameredcard;//intialize to 0
	short s_totalredcards;//intialize to 0
	short s_totalyellowcards;//intialize to 0
	short s_numforprogram;//intialize to 0//
	short s_numforinthefield;//baraye printplayer k mosavi e gharar dadam//intialize to -1
	yellowcardgottime yellowcardgottime[240];//extra
	redcardgottime redcardgottime[240];//extra
	changedtime changedtimein[240];//extra
	changedtime changedtimeout[240];//extra
	short indexgameplayed[240];//0 for no 1 for yes//intialize to 0->not done
}Player;
typedef struct
{
	char c_nameteam[20];//read from defult
	Player player[48];
	short s_playercount;//readfrom defult
	short s_score;//intialize to 0
	short s_goalsfor;//intialize to zero
	short s_goalsagainst;//intialize to zero
	short s_goaldiffrence;//=s_golasfor-s_goalsagainst//intialize to zero
	short s_defencestrength;//intialize to zero
	short s_attackstrength;//intialize to zero
	short s_midfieldstrength;//intialize to zero
	short s_teamtotalstrength;//intialize to zero
	short s_goalkeepingstrength;//intialize to zero
	short s_numforprogram;//intialize to zero
	short s_constnum;//ie chi nvshtam bara intializesh bad fght moghe new game ejra beshe
	short s_gamewon;//intialize to zero
	short s_gamelost;//intialize to zero
	short s_gametied;//intialize to zero
	short s_numofdefenders;//intialize to zero
	short s_numofforwards;//intialize to zero
	short s_numofmidfielders;//intialize to zero
	short s_numofgoalkeepers;//intialize to zero
	short s_myteam;// 0 for not my team and 1 for my team//intialize to 0
	System system;
}Team;
typedef struct {
	Team *team1;
	Team *team2;
	short s_team1goals;//intialize to 0
	short s_team2goals;//intialize to 0
	short s_team1possesspercent;//intialize to 0
	short s_team2possesspercent;//intialize to 0
	short s_team1goalersnumforprogram[10];//intialize to 0
	short s_team2goalersnumforprogram[10];//intialize to 0
	short s_team1point;//intialize to 0
	short s_team2point;//intialize to 0
	short s_team1passgoalersnumforprogram[10];//intialize to 0
	short s_team2passgoalersnumforprogram[10];//intialize to 0
	short s_team1numofyellowcards;//intialize to 0
	short s_team1yellownumfrprogram[30];//i have no idea why ive defined this
	short s_team1numofredcards;//intialize to 0
	short s_team1rednumfrprogram[10];//i have no idea why ive defined this
	short s_team2numofyellowcards;//intialize to 0
	short s_team2yellownumfrprogram[30];//i have no idea why ive defined this
	short s_team2numofredcards;//intialize to 0
	short s_team2rednumfrprogram[10];//i have no idea why ive defined this
	Date date;//fateme tozih bde
	GoalDetail team1goaldetail[10];
	GoalDetail team2goaldetail[10];
	short GameDone;//intializ to 0 // 0 for ot done and 1 for done
				   //1 for host 2 for guest
}GameResult;



