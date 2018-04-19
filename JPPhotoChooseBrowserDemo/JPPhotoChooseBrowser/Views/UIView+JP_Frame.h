//
//  UIView+JP_Frame.h
//
//
//  Copyright © dongjiangpeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (JP_Frame)

@property(nonatomic,assign)CGFloat jp_x;
@property(nonatomic,assign)CGFloat jp_y;
@property(nonatomic,assign)CGFloat jp_w;
@property(nonatomic,assign)CGFloat jp_h;
@property(nonatomic,assign)CGFloat jp_centerX;
@property(nonatomic,assign)CGFloat jp_centerY;

- (void)jp_removeAllSubViews;

- (void)jp_viewMoveTo_X:(CGFloat)x Y:(CGFloat)y duration:(CGFloat)duration finishBlock:(void(^)())finishBlock;

@end
