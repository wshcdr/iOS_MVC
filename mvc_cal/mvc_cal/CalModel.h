//
//  CalModel.h
//  mvc_cal
//
//  Created by apple on 16/6/7.
//  Copyright © 2016年 dyd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalModel : NSObject

@property (nonatomic)int sum_rst;

-(void) sum : (int)para1 para2:(int)para2;

-(int) getSum;
@end
