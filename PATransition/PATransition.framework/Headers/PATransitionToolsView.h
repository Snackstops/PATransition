//
//  PATransitionToolsView.h
//  PATransition
//
//  Created by PATransition on 2020/7/15.
//  Copyright © 2020 PATransition. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PATransitionModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface PATransitionToolsView : UIView
@property (nonatomic, strong) NSMutableDictionary *USERINFO;
@property (nonatomic, strong) PATransitionModel *model;
@end

NS_ASSUME_NONNULL_END
