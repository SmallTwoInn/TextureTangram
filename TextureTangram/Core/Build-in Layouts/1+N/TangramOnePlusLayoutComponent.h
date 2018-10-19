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

#import "TangramLayoutComponent.h"

/** 1+N 布局 */
@interface TangramOnePlusLayoutComponent : TangramLayoutComponent

@property (nonatomic, copy) NSArray *rowPartitions; ///< 右方的行高比例；最终的高度是左边的item定的
@property (nonatomic) double aspectRatio; ///< 整体宽高比
/**
 //TODO:设定宽度比例，内容是百分比的数字。下面的1,2,3,4,5 指代第N个组件，具体可看样例图组件上的数字。三个组件时：1:2；四个组件：1:2:3:4;五个组件时:1:2:3:4:5
 */
@property (nonatomic, copy) NSArray *cols;

@end
