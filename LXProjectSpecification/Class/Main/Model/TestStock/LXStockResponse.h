//
//  ResponseModel.h
//  MJExtensionDemo
//
//  Created by 李旭 on 16/3/24.
//  Copyright © 2016年 李旭. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LXStockResponseStatus.h"
#import "LXStockList.h"

@interface LXStockResponse : NSObject

@property (nonatomic, strong) LXStockResponseStatus *responseStatus;
@property (nonatomic, strong) NSArray *stockList;

@end
