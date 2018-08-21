//
//  ColorfulModel.h
//  TextureTangram
//
//  Created by cello on 2018/8/14.
//  Copyright © 2018年 ZZinKin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TangramComponentDescriptor.h"

@interface ColorfulModel : TangramComponentDescriptor

@property (nonatomic, strong) UIColor *color;
@property CGFloat canvasHeight;

@end
