//
//  PATransitionModel.h
//  PATransition
//
//  Created by PATransition on 2020/7/15.
//  Copyright © 2020 PATransition. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface PATransitionModel : NSObject
/**
 BOUNDID
 默认空
 */
@property (nonatomic, strong) NSString *BOUNDID;
/**
 时间
 20200101120000
 */
@property (nonatomic, strong) NSString *TIME;
/**
背景颜色
默认白色
*/
@property (nonatomic, strong) UIColor *BGColor;
/**
背景图片
默认空
*/
@property (nonatomic, strong) UIImage *BGIMG;
/**
是否显示Loading
默认YES
*/
@property (nonatomic) BOOL SHOWLOADING;
/**
是否包含导航栏
默认NO
*/
@property (nonatomic) BOOL ContainsNavigation;
/**
是否包含TaB
默认NO
*/
@property (nonatomic) BOOL ContainsTabBar;


@end

NS_ASSUME_NONNULL_END
