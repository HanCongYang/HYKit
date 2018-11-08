//
//  HYSwizzleMethod.h
//  Object-CPlayGround
//
//  Created by 韩丛旸 on 2017/6/15.
//  Copyright © 2017年 韩丛旸. All rights reserved.
//

#import <Foundation/Foundation.h>

extern void HYSwizzleMethod(Class cls, SEL originalSelector, SEL swizzledSelector);
