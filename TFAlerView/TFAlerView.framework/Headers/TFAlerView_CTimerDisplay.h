//
//  TFAlerView_CTimerDisplay.h
//  PhotoBrowseDemo
//
//  Created by snackstops on 2020/4/1.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFAlerView_CButton.h"
NS_ASSUME_NONNULL_BEGIN

@interface TFAlerView_CTimerDisplay : UIView {
    CGFloat currentAngle;
    CGFloat currentTime;
    CGFloat timerLimit;
    CGFloat radius;
    CGFloat lineWidth;
    NSTimer *timer;
    TFAlerView_CActionBlock completedBlock;
}

@property CGFloat currentAngle;
@property NSInteger buttonIndex;
@property (strong, nonatomic) UIColor *color;
@property (assign, nonatomic) BOOL reverse;

- (instancetype)initWithOrigin:(CGPoint)origin radius:(CGFloat)r;
- (instancetype)initWithOrigin:(CGPoint)origin radius:(CGFloat)r lineWidth:(CGFloat)width;
- (void)updateFrame:(CGSize)size;
- (void)cancelTimer;
- (void)stopTimer;
- (void)startTimerWithTimeLimit:(int)tl completed:(TFAlerView_CActionBlock)completed;

@end

NS_ASSUME_NONNULL_END
