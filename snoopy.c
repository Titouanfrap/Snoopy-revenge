#include "snoopy.h"
#include <stdio.h>
#include <unistd.h>
#include "FinNiveaux.h"


void deplacement(char tab[14][24], char *key, Snoopy *snoopy, int *compteur) {

    tab[snoopy->x][snoopy->y] = 0;

    switch (*key) {
        case 'z':
            if (tab[snoopy->x-1][snoopy->y] != 5 ){
                if (tab[snoopy->x-1][snoopy->y] != 2 ){
                    if (tab[snoopy->x-1][snoopy->y] != 7 ){
                        if (tab[snoopy->x-1][snoopy->y] != 6 ){
                            if (tab[snoopy->x-1][snoopy->y] != 4 ){
                                if (tab[snoopy->x-1][snoopy->y] != 3 ){
                                    if (tab[snoopy->x-1][snoopy->y] != 13) {
                                        if (tab[snoopy->x-1][snoopy->y] != 1) {
            if (snoopy->x > 2) {
                snoopy->x--;
            }}}}}}}}}
            if (tab[snoopy->x-1][snoopy->y] == 1) {
                if (tab[snoopy->x-2][snoopy->y] == 0) {
                    if (snoopy->x > 2) {
                        snoopy->x--;
            }}}
            break;
        case 'q':
            if (tab[snoopy->x][snoopy->y-1] != 2){
                if (tab[snoopy->x][snoopy->y-1] != 5){
                    if (tab[snoopy->x][snoopy->y-1] != 6){
                        if (tab[snoopy->x][snoopy->y-1] != 7){
                            if (tab[snoopy->x][snoopy->y-1] != 4){
                                if (tab[snoopy->x][snoopy->y-1] != 3){
                                    if (tab[snoopy->x][snoopy->y-1] != 13) {
                                        if (tab[snoopy->x][snoopy->y-1] != 1) {
            if (snoopy->y > 2) {
                snoopy->y--;
            }}}}}}}}
            if (tab[snoopy->x][snoopy->y-1] == 1) {
               if (tab[snoopy->x][snoopy->y-2] == 0) {
                  if (snoopy->y > 2) {
                      snoopy->y--;
               }}}
            break;
        case 's':
            if (tab[snoopy->x+1][snoopy->y] != 5){
                if (tab[snoopy->x+1][snoopy->y] != 6){
                    if (tab[snoopy->x+1][snoopy->y] != 7){
                        if (tab[snoopy->x+1][snoopy->y] != 2){
                            if (tab[snoopy->x+1][snoopy->y] != 3){
                                if (tab[snoopy->x+1][snoopy->y] != 4){
                                    if (tab[snoopy->x+1][snoopy->y] != 13) {
                                        if (tab[snoopy->x+1][snoopy->y] != 1) {
            if (snoopy->x < 11) {
                snoopy->x++;
            }}}}}}}}}
            if (tab[snoopy->x+1][snoopy->y] == 1) {
                if (tab[snoopy->x+2][snoopy->y] == 0) {
                    if (snoopy->x < 11) {
                        snoopy->x++;
                }}}
            break;
        case 'd':
            if (tab[snoopy->x][snoopy->y+1] != 5) {
                if (tab[snoopy->x][snoopy->y+1] != 2) {
                    if (tab[snoopy->x][snoopy->y+1] != 3) {
                        if (tab[snoopy->x][snoopy->y+1] != 4) {
                            if (tab[snoopy->x][snoopy->y+1] != 7) {
                                if (tab[snoopy->x][snoopy->y+1] != 6) {
                                    if (tab[snoopy->x][snoopy->y+1] != 13) {
                                        if (tab[snoopy->x][snoopy->y+1] != 1) {
                if (snoopy->y < 21) {
                    snoopy->y++;
            }}}}}}}}}}
            if (tab[snoopy->x][snoopy->y+1] == 1) {
                if (tab[snoopy->x][snoopy->y+2] == 0) {
                    if (snoopy->y < 21) {
                        snoopy->y++;
                }}}
            break;
        case 'a':
            if (tab[snoopy->x+1][snoopy->y] == 13) {
                tab[snoopy->x+1][snoopy->y] = 0;
            }
            if (tab[snoopy->x-1][snoopy->y] == 13) {
                tab[snoopy->x-1][snoopy->y] = 0;
            }
            if (tab[snoopy->x][snoopy->y+1] == 13) {
                tab[snoopy->x][snoopy->y+1] = 0;
            }
            if (tab[snoopy->x][snoopy->y-1] == 13) {
                tab[snoopy->x][snoopy->y-1] = 0;
            }

    }


    if (tab[snoopy->x][snoopy->y] == 1){
        if (tab[snoopy->x+1][snoopy->y] == 0){
            if (*key== 's'){
                tab[snoopy->x][snoopy->y] = 0;
                tab[snoopy->x+1][snoopy->y] = 5;
            }
        }
    }
    if (tab[snoopy->x][snoopy->y] == 1){
        if (tab[snoopy->x-1][snoopy->y] == 0){
            if (*key== 'z'){
                tab[snoopy->x][snoopy->y] = 0;
                tab[snoopy->x-1][snoopy->y] = 5;
            }
        }
    }
    if (tab[snoopy->x][snoopy->y] == 1){
        if (tab[snoopy->x][snoopy->y+1] == 0){
            if (*key== 'd'){
                tab[snoopy->x][snoopy->y] = 0;
                tab[snoopy->x][snoopy->y+1] = 5;
            }
        }
    }
    if (tab[snoopy->x][snoopy->y] == 1) {
        if (tab[snoopy->x][snoopy->y - 1] == 0) {
            if (*key == 'q') {
                tab[snoopy->x][snoopy->y] = 0;
                tab[snoopy->x][snoopy->y - 1] = 5;
            }
        }
    }
    if (tab[snoopy->x][snoopy->y] == 11) {
        (*compteur)++;
    }
    tab[snoopy->x][snoopy->y] = 9;
}

