//
//  TangramLayoutComponent.h
//  TextureTangram
//
//  Created by 廖超龙 on 2018/8/13.
//  Copyright © 2018年 ZZinKin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TangramComponentDescriptor.h"

NS_ASSUME_NONNULL_BEGIN

/** 类似tableView header吸顶、footer吸底的效果 */
typedef NS_ENUM(NSUInteger, TangramLayoutComponentPinnedType) {
    TangramLayoutComponentPinnedTypeNone,
    TangramLayoutComponentPinnedTypeTop,
    TangramLayoutComponentPinnedTypeBottom,
};

/**
 对应tangram的内置布局；类似collectionView的section
 */
@interface TangramLayoutComponent : NSObject

@property (nonatomic) CGPoint layoutOrigin; ///< 布局的起点

@property (nonatomic) UIEdgeInsets margin; ///< layout的外边距； margin
@property (nonatomic) UIEdgeInsets insets; ///< layout的内边距；对应padding

@property (nonatomic) BOOL isFloatingLayout; ///< 是否为固定布局/浮动布局
@property (nonatomic) TangramLayoutComponentPinnedType pinnedType; ///< 是否有吸顶/吸底效果
@property (nonatomic) CGFloat height;  ///< 整个布局的高度；缓存此信息
/// 整个layout的头部描述信息，布局在items上方
@property (nonatomic, strong, nullable) id<TangramComponentDescriptor> headerInfo;
/// 整个layout尾部信息，布局在items下方
@property (nonatomic, strong, nullable) id<TangramComponentDescriptor> footerInfo;

/// 背景图片地址
@property (nonatomic, strong, nullable) NSString *backgroundImageURL;
/// 背景颜色
@property (nonatomic, strong, nullable) UIColor *backgroundColor;

///  布局项，对应cell
@property (nonatomic, strong, nonnull)  NSArray<id<TangramComponentDescriptor>> *itemInfos;
@property (nonatomic) UIEdgeInsets edgeInsets;  ///< 整个layout的边距；需要注意附近的layout也可能会设置


/**
 重写此方法重新计算布局；调用super会计算header+footer的高度
 */
- (CGFloat)computeLayouts;

@end

 NS_ASSUME_NONNULL_END
