//
//  PATransitionManager+ViewMoveAnimation.h
//  PATransition
//
//  Created by AlanWang on 16/9/22.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "PATransitionManager.h"

@interface PATransitionManager (ViewMoveAnimation)
- (void)viewMoveNextWithType:(PATransitionAnimationType )type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;
- (void)viewMoveBackWithType:(PATransitionAnimationType )type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;


@end
