//
//  CWProvinceModel.h
//  Test
//
//  Created by wangcyan on 2017/6/22.
//  Copyright © 2017年 cyan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CWProvinceModel : NSObject
    
@property (nonatomic, copy) NSString *pid;
    
@property (nonatomic, copy) NSString *title;
    
@property (nonatomic, copy) NSString *num;
    
+ (void)arrModelWithUrl:(NSString *)url withDicParam:(NSDictionary *)dicParam success:(void (^)(NSArray <CWProvinceModel *>*arrProvince))successBlock;

@end
