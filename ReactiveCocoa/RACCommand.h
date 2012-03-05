//
//  RACCommand.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 3/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "RACObservableValue.h"


@interface RACCommand : RACObservableValue

@property (nonatomic, strong) RACObservableValue *canExecuteValue;

+ (RACCommand *)command;
+ (RACCommand *)commandWithCanExecute:(BOOL (^)(id value))canExecuteBlock execute:(void (^)(id value))executeBlock;

- (BOOL)canExecute:(id)value;
- (void)execute:(id)value;

@end
