#include <stdio.h>
#include <stdlib.h>

void boneco(int forma);

int main(){
	int i, s;
	int chances = 6;
	for(i = 0; i < chances; i++){
		boneco(i);
		printf("Digite:");
		scanf("%d",&s);
		system("cls");
	}
	return 0;
}

void boneco(int forma){
	if(forma > 0 ){
		 printf("			 ______					  "
				"		   // 0  0 \\			 	  "
				"		  //    	\\				  "
				"		  \\  ____  //				  "
				"		   \\______//				  ");
	}if(forma > 1 ){
		 printf("		   /       \				  "
		 		"	      /         \  				  "
				"        |           |       		  "
				"        |           |          	  "
				"        |           |           	  "
				"        |           |       		  ");	
	}if(forma > 2 ){
		 printf("		 _____/		\____             "
		 		"		/  	       	 	  \			  "
		 		"	   /               	   \	      "
				"     /   /|           |\   \   	  "
				"    /   / |           | \   \        "
				"   /   /  |           |  \   \       "
				"      /   |           |   \   \ 	  ");	
	}if(forma > 3 ){
		 printf("		    ___________			      "
				"		   |		   |		 	  "
				"		   |   _____   |		 	  "
				"		   |  |		|  |		 	  "
				"		   |  |     |  |		 	  ");	
	}if(forma > 4 ){
		 printf("		   |  |		|  |		      "
				"		   |  |		|  | 			  "
				"		___|  |	 	|  |___		 	  "
				"		\_____|	  	|_____/		 	  ");
	}
}
