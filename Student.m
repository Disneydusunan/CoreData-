//
//  Student.m
//  CoreData
//
//  Created by 谢谦 on 16/2/24.
//  Copyright © 2016年 杜苏南. All rights reserved.
//

#import "Student.h"

@implementation Student
@synthesize age;

-(NSString *)description{

    NSString *str = [NSString stringWithFormat:@"姓名%@,密码%@，年龄%d",self.name,self.pass,self.age];

    return str;
}

@end
