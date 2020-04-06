//
//  NSString+TFAlerView_Toast.h
//  PhotoBrowseDemo
//
//  Created by snackstops on 2020/3/31.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString(TFAlerView_Toast)
+ (CGSize)sizeForString:(NSString*)content font:(UIFont*)font maxWidth:(CGFloat) maxWidth;
@end

NS_ASSUME_NONNULL_END
