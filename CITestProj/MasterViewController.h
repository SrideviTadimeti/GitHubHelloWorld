//
//  MasterViewController.h
//  CITestProj
//
//  Created by Sridevi Tadimeti on 2/25/14.
//  Copyright (c) 2014 Sridevi Tadimeti. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
