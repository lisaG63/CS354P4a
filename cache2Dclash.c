///////////////////////////////////////////////////////////////////////////////
// Main File:        cache1D.c, cache2Dclash.c, cache2Drows.c, cache2Dcols.c
// This File:        cache2DClash.c
// Other Files:      cache1D.c, cache2Drows.c, cache2Dcols.c
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
int arr2D[128][8];
int main(void) {
    for(int i = 0; i < 100; i ++) {
        for(int row = 0; row < 128; row += 64) {
            for(int col = 0; col < 8; col ++) {
                arr2D[row][col] = i + row + col;
            }
            
        }
    }
    return 0;
}