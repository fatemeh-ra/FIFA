#include "Structs.h"
#include <stdio.h>

void team_info_get(FILE *, Team team[]);
int input(char*);
void save(Team *);
void date();
void SwapPlayer(Team *team, int teamnum, int playnum);
void PlayerFeaturesRandom(Team team[]);
void SortPlayerStrength(Team *team);
void start(Team team[]);
void ChooseTeam(Team team[]);
void ComputeTeamFeatures(Team team[]);
void TeamShowInfo(Team *team, int teamnum);
void SystemSuggest(Team team[]);
void SystemChoose(Team *team, int index);
void PlayerSuggest(Team team[]);
void FillPlayerInTeam(Team team[]);
void Intialize(Team team[], GameResult game[]);
void PlayerSort(Team team[]);
void PlayerChoose(Team *team);
