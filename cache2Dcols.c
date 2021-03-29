///////////////////////////////////////////////////////////////////////////////
// Main File:        cache1D.c, cache2Dclash.c, cache2Drows.c, cache2Dcols.c
// This File:        cache2Dcols.c
// Other Files:      cache2Dclash.c, cache2Drows.c, cache1D.c
// Semester:         CS 354 Fall 2020
// Instructor:       deppeler
// 
// Discussion Group: DISC 631
// Author:           Weihang Guo
// Email:            wguo63@wisc.edu
// CS Login:         weihang
//
/////////////////////////// OTHER SOURCES OF HELP //////////////////////////////
//                   fully acknowledge and credit all sources of help,
//                   other than Instructors and TAs.
//
// Persons:          None
//
// Online sources:   None
//
//////////////////////////// 80 columns wide ///////////////////////////////////
int arr2D[3000][500];
int main(void) {
    for(int col = 0; col < 500; col ++) {
        for(int row = 0; row < 3000; row ++) {
            arr2D[row][col] = row + col;
        }
    }
    return 0;
}