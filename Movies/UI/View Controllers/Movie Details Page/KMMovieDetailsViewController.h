//
//  KMMovieDetailsViewController.h
//  TheMovieDB
//
//  Created by Kevin Mindeguia on 04/02/2014.
//  Copyright (c) 2014 iKode Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KMScrollingHeaderView.h"
#import "KMMovie.h"
#import "KMGillSansLabel.h"
#import "KMNetworkLoadingViewController.h"

@interface KMMovieDetailsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, KMNetworkLoadingViewDelegate, KMScrollingHeaderViewDelegate>

@property (weak, nonatomic) IBOutlet UIView *navigationBarView;
@property (weak, nonatomic) IBOutlet UIView *networkLoadingContainerView;
@property (weak, nonatomic) IBOutlet KMScrollingHeaderView* scrollingHeaderView;
@property (weak, nonatomic) IBOutlet KMGillSansLightLabel *navBarTitleLabel;

@property (strong, nonatomic) KMMovie* movieDetails;

- (IBAction)popViewController:(id)sender;

@end
