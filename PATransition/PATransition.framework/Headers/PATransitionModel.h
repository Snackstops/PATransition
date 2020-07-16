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

@property (nonatomic, strong) NSString *BOUNDID;
@property (nonatomic, strong) NSString *TIME;//20200101120000
@property (nonatomic, strong) UIColor *BGColor;
//@property (nonatomic, strong) UIImage *BGIMG;
@property (nonatomic) BOOL ContainsNavigation;//是否包含导航栏
@property (nonatomic) BOOL ContainsTabBar;//是否包含TaB


@end

NS_ASSUME_NONNULL_END
