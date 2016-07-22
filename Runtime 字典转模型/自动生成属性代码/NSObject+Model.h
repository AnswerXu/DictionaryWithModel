//
//  NSObject+Model.h
//  Runtime 字典转模型
//
//  Created by 澳蜗科技 on 16/7/22.
//  Copyright © 2016年 澳蜗科技. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Model)

+ (instancetype)modelWithDict:(NSDictionary *)dict;

@end
