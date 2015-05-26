//
//  LocationModel.h
//  WeChatLocationDemo
//
//  Created by HuiYang on 15/5/25.
//  Copyright (c) 2015年 Email：xiaoyangh@foxmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LocationModel : NSObject
//title
@property(nonatomic,strong)NSString *name;
//detail
@property(nonatomic,strong)NSString *address;
//经度
@property(nonatomic,assign)double longitude;
//纬度
@property(nonatomic,assign)double latitude;


@end
