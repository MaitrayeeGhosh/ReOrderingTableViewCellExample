//
//  ViewController.h
//  ReOrderingTableViewCellExample
//
//  Created by Maitrayee Ghosh on 17/02/16.
//  Copyright © 2016 Maitrayee Ghosh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
    NSMutableArray *dataArray;
}
@property (weak, nonatomic) IBOutlet UITableView *mTableView;


@end

