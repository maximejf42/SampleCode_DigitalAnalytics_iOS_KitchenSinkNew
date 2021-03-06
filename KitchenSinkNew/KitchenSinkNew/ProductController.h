/*******************************************************************************
 * Licensed Materials - Property of IBM
 * (C) Copyright IBM Corp. 2016
 * US Government Users Restricted Rights - Use, duplication or disclosure
 * restricted by GSA ADP Schedule Contract with IBM Corp.
 ******************************************************************************/
#import <UIKit/UIKit.h>

#import "ProductCategory.h"

@interface ProductController : UITableViewController<UIAlertViewDelegate>

@property (nonatomic,strong) ProductCategory *productCategory;

@end
