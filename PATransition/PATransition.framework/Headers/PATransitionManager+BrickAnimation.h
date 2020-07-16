//
//  PATransitionManager+BrickAnimation.h
//  PATransition
//
//  Created by AlanWang on 16/9/20.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "PATransitionManager.h"

@interface  PATransitionManager (BrickAnimation)

- (void)brickOpenNextWithType:(PATransitionAnimationType)type andTransitionContext:(id<UIViewControllerContextTransitioning>)transitionContext;
- (void)brickOpenBackWithType:(PATransitionAnimationType)type andTransitionContext:(id<UIViewControllerContextTransitioning>)transitionContext;
- (void)brickCloseNextWithType:(PATransitionAnimationType)type andTransitionContext:(id<UIViewControllerContextTransitioning>)transitionContext;
- (void)brickCloseBackWithType:(PATransitionAnimationType)type andTransitionContext:(id<UIViewControllerContextTransitioning>)transitionContext;

@end
