//
//  ResultsViewController.h
//  WolframDemo
//
//  Created by Kostas Kremizas on 1/18/12.
//  Copyright (c) 2012 kremizask@niobiumlabs.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Pod.h"
#import "BaseViewController.h"
//@class ASIHTTPRequest;


@interface ResultsViewController : BaseViewController
@property (nonatomic, retain) NSString *searchTerm;

@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) NSMutableArray *imageViews;
@property (nonatomic, retain) NSMutableArray *images;
@property (nonatomic, retain) NSMutableDictionary *pods;
@end
