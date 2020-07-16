//
//  PATransitionTools.h
//  PATransition
//
//  Created by PATransition on 2020/7/15.
//  Copyright © 2020 PATransition. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PATransitionModel.h"
NS_ASSUME_NONNULL_BEGIN

typedef void(^PATransitionModelBlock)(PATransitionModel *Model);
typedef void(^PATransitionENDBlock)(id Json);

@interface PATransitionTools : NSObject
+ (instancetype)shareInstance;
- (void)PA_pushViewController:(UIViewController *)VC makeTransition:(PATransitionModelBlock) transitionBlock EndTransition:(PATransitionENDBlock) EndtransitionBlock;
@end

NS_ASSUME_NONNULL_END
