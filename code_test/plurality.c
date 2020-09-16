#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);
candidate* sort_array(candidate* candidates);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }

    }
    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
   for (int i = 0; i < candidate_count; i++)
    {
       if (strcmp(candidates[i].name, name) == 0)
       {
           candidates[i].votes += 1;
       }
    }
    return true;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    candidate *sorted_array = (candidate*) malloc(candidate_count * sizeof(candidate));
    sorted_array = sort_array(candidates);
    int high_vote = sorted_array[candidate_count-1].votes;
    for ( int i = 0; i < candidate_count; i++ )
    {
        if ( sorted_array[i].votes == high_vote )
        {
            puts(sorted_array[i].name);
        }
    }
}

candidate* sort_array(candidate candidates[])
{
    int swp_cnt = 0;
    for ( int i = 0; i < candidate_count - 1; i++ )
    {
        if(candidates[i].votes > candidates[i+1].votes)
        {
            candidate temp_a = candidates[i+1];
            candidate temp_b = candidates[i];
            candidates[i] = temp_a;
            candidates[i+1] = temp_b;
            swp_cnt += 1;
        }
    }
    if ( swp_cnt == 0 )
    {
        return candidates;
    }
    else
    {
        sort_array(candidates);
    }
}