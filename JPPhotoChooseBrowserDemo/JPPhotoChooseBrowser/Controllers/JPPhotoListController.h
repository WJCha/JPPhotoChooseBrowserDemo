//
//  JPPhotoListController.h
//  WeChat_D
//
//  Created by tztddong on 16/8/10.
//  Copyright © 2016年 dongjiangpeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@class JPPhotoGroupModel;
@interface JPPhotoListController : UIViewController

/** name */
@property(nonatomic,strong) JPPhotoGroupModel *groupModel;

/** maxIndex */
@property(nonatomic,assign) NSInteger maxImageCount;

@end
