//
//  PATransitionManager+TypeTool.h
//  PATransition
//
//  Created by AlanWang on 16/9/20.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "PATransitionManager.h"

@interface PATransitionManager (TypeTool)<CAAnimationDelegate>
-(void)backAnimationTypeFromAnimationType:(PATransitionAnimationType)type;
-(CATransition *)getSysTransitionWithType:(PATransitionAnimationType )type;
@end
