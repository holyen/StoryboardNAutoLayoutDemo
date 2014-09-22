//
//  PlayerCell.h
//  StoryboardNAutoLayoutDemo
//
//  Created by iOS on 14-9-22.
//  Copyright (c) 2014年 0jiedian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end
