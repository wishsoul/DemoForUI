//
//  DetailViewController.h
//  DemoForUI
//
//  Created by Bash on 16/6/7.
//  Copyright © 2016年 JieJing. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

