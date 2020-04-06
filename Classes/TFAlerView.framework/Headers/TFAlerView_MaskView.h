//
//  TFAlerView_MaskView.h
//  PhotoBrowseDemo
//
//  Created by snackstops on 2020/4/1.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MaskViewState) {
    MaskViewDef       = 0,
    MaskViewBottom         = 1,
};


@interface TFAlerView_MaskView : UIView
@property (nonatomic, assign) MaskViewState type;
@property (nonatomic, strong) UIView *contentView;

// 点击背景时候隐藏alert
@property (nonatomic, assign) BOOL hiddenWhenTapBG;

// Show the alert view in current window
- (void)show;

// Hide the alert view
- (void)hide;
@end

NS_ASSUME_NONNULL_END
