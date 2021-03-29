///////////////////////////////////////////////////////////////////////////////
// Main File:        cache1D.c, cache2Dclash.c, cache2Drows.c, cache2Dcols.c
// This File:        cache1D.c
// Other Files:      cache2Dclash.c, cache2Drows.c, cache2Dcols.c
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
int arr[100000];
int main(void) {
    for(int i = 0; i < 100000; i ++) {
        arr[i] = i;
    }
    return 0;
}