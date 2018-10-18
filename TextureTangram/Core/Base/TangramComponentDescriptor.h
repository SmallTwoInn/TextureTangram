// Copyright ZZinKin
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#import <UIKit/UIKit.h>

/**
 一个实体控件（如卡片、header、footer）的描述信息；不能看作一个Model，实际上它与控件是一一对应的
 类似于UICollectionViewLayoutAttributes
 */
@interface TangramComponentDescriptor: NSObject

@property UIEdgeInsets insets; ///< 内边距
@property (strong) NSString *type; ///< UI组件的类型
@property  CGRect frame; ///< 布局的frame，未完成布局之前，使用此属性会不准确
@property  CGFloat width; ///< 控件的宽度，第一次布局的时候会设置这个属性。
@property  CGFloat expectedHeight;

- (CGFloat)computeHeightWithWidth:(CGFloat)width; ///< 自计算高度；会影响expectedHeight属性


@end
