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

#import "TangramNodeRegistry.h"

@interface TangramNodeRegistry()

@property (nonatomic, strong) NSMutableDictionary *registry; //FIXME: 这里线程不安全

@end

/// 注册表
@implementation TangramNodeRegistry

+  (instancetype)shared {
    static TangramNodeRegistry *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [self new];
        instance.registry = [NSMutableDictionary dictionaryWithCapacity:8];
        instance.registry[@"placeholder"] = NSClassFromString(@"TangramItemNode");
    });
    return instance;
}

+ (void)registerFromDictionary:(nonnull NSDictionary<NSString *, Class> *)dictionary {
    [[TangramNodeRegistry shared].registry addEntriesFromDictionary:dictionary];
}

+ (void)registerClass:(Class)cls forType:(NSString *)type {
    if (!type) {
        return;
    }
    [TangramNodeRegistry shared].registry[type] =  cls;
}

+ (nullable Class)classForType:(nonnull NSString *)type{
    return [TangramNodeRegistry shared].registry[type];
}

@end
