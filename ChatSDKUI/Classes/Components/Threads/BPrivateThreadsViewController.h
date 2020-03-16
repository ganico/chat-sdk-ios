//
//  BThreadsViewController.h
//  Chat SDK
//
//  Created by Benjamin Smiley-andrews on 24/09/2013.
//  Copyright (c) 2013 deluge. All rights reserved.
//

#import "BThreadsViewController.h"

@class BChatViewController;

@interface BPrivateThreadsViewController : BThreadsViewController <UISearchBarDelegate> {
    NSMutableArray *filteredArray;
}

@property (nonatomic, readwrite) UISearchBar * searchBar;

-(void) removeUserDisabledDM: (NSMutableArray *) threads;

@end
