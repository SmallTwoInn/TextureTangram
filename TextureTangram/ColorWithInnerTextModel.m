//
//  ColorWithInnerTextModel.m
//  TextureTangram
//
//  Created by cello on 2018/8/21.
//  Copyright © 2018年 ZZinKin. All rights reserved.
//

#import "ColorWithInnerTextModel.h"

@implementation ColorWithInnerTextModel

// 本应该由json设置
- (NSString *)type {
    return @"innerText";
}

- (CGFloat)computeHeightWithWidth:(CGFloat)width {
    return self.expectedHeight > 0?self.expectedHeight:60;
}

@end