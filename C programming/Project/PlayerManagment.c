#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int jersey_no;
	char player_name[50];
	int runs;
	int wickets;
	int matches_played;

} player;

void hardcoded(player *p,int *n) {


	p[*n].jersey_no = 45;
	strcpy(p[*n].player_name, "Rohit");
	p[*n].runs = 19700;
	p[*n].wickets = 8;
	p[*n].matches_played = 497;
	(*n)++;

	p[*n].jersey_no = 18;
	strcpy(p[*n].player_name, "Virat");
	p[*n].runs = 27975;
	p[*n].wickets = 5;
	p[*n].matches_played = 556;
	(*n)++;


	p[*n].jersey_no = 7;
	strcpy(p[*n].player_name, "Dhoni");
	p[*n].runs = 17266;
	p[*n].wickets = 0;
	p[*n].matches_played = 485;
	(*n)++;


}// hardcoded end here


//add player
void addplayer(player **p,int *n,int *capacity) {

	if (*n == *capacity) {
		*capacity *= 2;
		*p = realloc(*p, (*capacity) * sizeof(player));

	}
	int jersey,found=1;

	while(found) {
		found=0;
		printf("Enter jersey no: ");
		scanf("%d", &jersey);

		for(int i=0; i<*n; i++) {

			if((*p)[i].jersey_no==jersey) {
				printf("Jersey number already exists.\n");
				found=1;
				break;
			}
		}
	}
	(*p)[*n].jersey_no = jersey;
	getchar();
	printf("Enter player name:");
	gets((*p)[*n].player_name);
	printf("Enter player runs:");
	scanf("%d",&(*p)[*n].runs);
	printf("Enter player wickets:");
	scanf("%d",&(*p)[*n].wickets);
	printf("Enter player matches played:");
	scanf("%d",&(*p)[*n].matches_played);
	(*n)++;

	printf("\n----------Player added successfully-------------\n");

}

// remove player
void removeplayer(player *p, int *n) {
	int jersey, found = 0;

	printf("Enter jersey number to remove: ");
	scanf("%d", &jersey);

	for(int i = 0; i < *n; i++) {
		if(p[i].jersey_no == jersey) {
			found = 1;

			for(int j = i; j < *n - 1; j++) {
				p[j] = p[j + 1];
			}

			(*n)--;
			printf("Player removed successfully\n");
			break;
		}
	}

	if(found == 0) {
		printf("Player with this jersey number not found\n");
	}
}


//search player
void searchplayer(player *p,int *n) {

	int jersey,found=0,choice;
	char name[50];


	printf("\nSearch player:");
	printf("\n1.jersey number");
	printf("\n2.player name");
	printf("\n3.Do you want go to in main meun");
	printf("\nEnter your choice:");
	scanf("%d",&choice);

	if(choice==1) {
		printf("Enter jersey number: ");
		scanf("%d", &jersey);

		for(int i=0; i<*n; i++) {

			if(p[i].jersey_no==jersey) {

				printf("Player jersey no:%d",p[i].jersey_no);
				printf("\nplayer name:%s",p[i].player_name);
				printf("\nplayer runs:%d",p[i].runs);
				printf("\nplayer wickets:%d",p[i].wickets);
				printf("\nplayer matched played:%d\n",p[i].matches_played);

				found=1;
				break;
			}
		}

	} else if (choice == 2) {

		getchar();
		printf("Enter player name: ");
		fgets(name, 50, stdin);
		name[strcspn(name, "\n")] = 0;

		for (int i = 0; i < *n; i++) {

			if (strncmp(p[i].player_name, name, strlen(name)) == 0) {

				printf("\nJersey : %d", p[i].jersey_no);
				printf("\nName   : %s", p[i].player_name);
				printf("\nRuns   : %d", p[i].runs);
				printf("\nWickets: %d", p[i].wickets);
				printf("\nMatches: %d\n", p[i].matches_played);

				found = 1;

			}
		}
	
	}
	else if(choice==3){
		printf("go main menu");
	} 
	if(found==0 && (choice==1||choice==2)){
	
	    printf("\nPlayer does not exist!");
	}
	

}   


//updateplayer
void updateplayerrwm(player *p,int *n) {
	int jersey, found = 0;
	int  addruns, addWickets, addMatches;

	printf("Enter jersey number of player to update: ");
	scanf("%d", &jersey);

	for(int i = 0; i < *n; i++) {
		if(p[i].jersey_no == jersey) {

			printf("\nUpdating player: %s (Jersey %d)\n", p[i].player_name, p[i].jersey_no);

			printf("Enter new runs: ");
			scanf("%d", &addruns);
			p[i].runs=p[i].runs+addruns;

			printf("Enter new wickets: ");
			scanf("%d", &addWickets);
			p[i].wickets=p[i].wickets+addWickets;

			printf("Enter new matches played: ");
			scanf("%d", &addMatches);
			p[i].matches_played=p[i].matches_played+addMatches;

			found = 1;
			printf("\n---------Player updated successfully.-----------\n");
			break;
		}
	}
	if(!found)
		printf("Player with jersey number not found.");
}


//display all player
void displayallplayer(player *p,int n) {

	for(int i=0; i<n; i++) {

		printf("Player jersey no:%d",p[i].jersey_no);
		printf("\nplayer name:%s",p[i].player_name);
		printf("\nplayer runs:%d",p[i].runs);
		printf("\nplayer wickets:%d",p[i].wickets);
		printf("\nplayer matched played:%d\n",p[i].matches_played);

		printf("\n");
		printf("\n----------Player display successfully-------------\n");
		printf("\n");
	}
}


//display sorted player by runs
void displaysortedplayerruns(player *p,int *n) {

	int choice;
	player temp;


	printf("\n1.All player maximum runs");
	printf("\n2.All player minimum runs");
	printf("\n3.Top 3 player maximum runs");
	printf("\nEnter your choice:");
	scanf("%d",&choice);


	if(choice==1) {
		for(int i=0; i<*n-1; i++) {
			for(int j=0; j<*n-1-i; j++) {
				if(p[j].runs<p[j+1].runs) {
					temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
				}
			}
		}
		printf("\n------------All Players Maximum Runs First-------------\n");
		for(int i=0; i<*n; i++) {
			printf("\nJersey No: %d || Name : %s||Runs     : %d", p[i].jersey_no,p[i].player_name,p[i].runs);

		}
	} else if(choice==2) {
		for(int i=0; i<*n-1; i++) {
			for(int j=0; j<*n-1-i; j++) {
				if(p[j].runs>p[j+1].runs) {
					temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
				}
			}

		}
		printf("\n------------All Players Minimum Runs First)------------\n");
		for(int i=0; i<*n; i++) {
			printf("\nJersey No: %d || Name : %s||Runs     : %d", p[i].jersey_no,p[i].player_name,p[i].runs);

		}
	} else if(choice==3) {

		for(int i=0; i<*n-1; i++) {
			for(int j=0; j<*n-1-i; j++) {
				if(p[j].runs<p[j+1].runs) {
					temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
				}
			}
		}

		printf("\n------------Display top three player runs----------\n");
		for(int i=0; i<3; i++) {
			printf("\nJersey No: %d || Name : %s ||Runs     : %d", p[i].jersey_no,p[i].player_name,p[i].runs);

		}
	}

	else {
		printf("Enter valid choice:");
	}
}

//display sorted player by wickets
void displaysortedplayerwickets(player *p,int *n) {

	int choice;
	player temp;


	printf("\n1.All player desending wickets");
	printf("\n2.All player acending wickets");
	printf("\n3.Top 3 player maximum wickets");
	printf("\nEnter your choice:");
	scanf("%d",&choice);


	if(choice==1) {
		for(int i=0; i<*n-1; i++) {
			for(int j=0; j<*n-1-i; j++) {
				if(p[j].wickets<p[j+1].wickets) {
					temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
				}
			}
		}
		printf("\n------------All Players desending wickets-----------\n");
		for(int i=0; i<*n; i++) {
			printf("\nJersey No: %d || Name : %s||Wickets     : %d", p[i].jersey_no,p[i].player_name,p[i].wickets);

		}
	} else if(choice==2) {
		for(int i=0; i<*n-1; i++) {
			for(int j=0; j<*n-1-i; j++) {
				if(p[j].wickets>p[j+1].wickets) {
					temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
				}
			}

		}
		printf("\n-------------All Players acending wickets)--------------\n");
		for(int i=0; i<*n; i++) {
			printf("\nJersey No: %d || Name : %s||Wickets     : %d", p[i].jersey_no,p[i].player_name,p[i].wickets);

		}
	} else if(choice==3) {

		for(int i=0; i<*n-1; i++) {
			for(int j=0; j<*n-1-i; j++) {
				if(p[j].wickets<p[j+1].wickets) {
					temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
				}
			}
		}

		printf("\n------------------Display top three player wickets-------------\n");
		for(int i=0; i<3; i++) {
			printf("\nJersey No: %d || Name : %s||Wickets     : %d", p[i].jersey_no,p[i].player_name,p[i].wickets);

		}
	}

	else {
		printf("Enter valid choice:");
	}
}





//main function
void main() {

	int choice,n=0,capacity=3;

	player *p = (player *)malloc(capacity * sizeof(player));
	hardcoded(p,&n);
	while(1) {

		printf("\n1.Add Player");
		printf("\n2.Remove Player");
		printf("\n3.Search Player");
		printf("\n4.Update Player");
		printf("\n5.Display All");
		printf("\n6.Display Sorted by runs");
		printf("\n7.Display Sorted by wickets");
		printf("\n0.Exit");
		printf("\nEnter choice: ");
		scanf("%d", &choice);

		if(choice==1) {
			addplayer(&p,&n,&capacity);
		} else if(choice==2) {
			removeplayer(p,&n);
		} else if(choice==3) {
			searchplayer(p,&n);
		} else if(choice==4) {
			updateplayerrwm(p,&n);
		} else if(choice==5) {
			displayallplayer(p,n);
		} else if(choice==6) {
			displaysortedplayerruns(p,&n);
		} else if(choice==7) {
			displaysortedplayerwickets(p,&n);
		} else if(choice==0) {
			printf("Exiting program \n");
			free(p);
			break;
		} else {
			printf("-------------------Invalid choice---------------------");
		}

	}
}