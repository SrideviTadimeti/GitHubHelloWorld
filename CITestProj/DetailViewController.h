//
//  DetailViewController.h
//  CITestProj
//
//  Created by Sridevi Tadimeti on 2/25/14.
//  Copyright (c) 2014 Sridevi Tadimeti. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
