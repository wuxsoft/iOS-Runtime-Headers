/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@class <APDSearchViewControllerDelegate>, APDSearchBar, APDSearchModel, NSString, NSTimer, UILabel, UIView;

@interface APDSearchViewController : APDNavigationTableViewController <UISearchBarDelegate> {
    NSTimer *_axSearchTimer;
    UIView *_footerView;
    UILabel *_footerViewLabel;
    APDSearchBar *_searchBar;
    APDSearchModel *_searchModel;
    BOOL _searching;
    BOOL _shouldHighlighViewingTopic;
    BOOL _showSearchBarPending;
    UIView *_toolbarTopOverlapView;
    UIView *_topbarBottomStrokeView;
    BOOL _viewDidAppeared;
}

@property(retain) NSTimer * axSearchTimer;
@property(copy,readonly) NSString * debugDescription;
@property <APDSearchViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) UIView * footerView;
@property UILabel * footerViewLabel;
@property(readonly) unsigned int hash;
@property APDSearchBar * searchBar;
@property(getter=isSearching) BOOL searching;
@property(readonly) Class superclass;
@property UIView * toolbarTopOverlapView;
@property UIView * topbarBottomStrokeView;

- (void).cxx_destruct;
- (void)announceResults;
- (id)axSearchTimer;
- (void)dismissKeyboard;
- (void)enableSearchBarCancelButton:(id)arg1;
- (void)endSearch;
- (id)footerView;
- (id)footerViewLabel;
- (void)hide;
- (id)init;
- (BOOL)isSearching;
- (int)positionForBar:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBar;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)setAxSearchTimer:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFooterViewLabel:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearching:(BOOL)arg1;
- (void)setToolbarTopOverlapView:(id)arg1;
- (void)setTopbarBottomStrokeView:(id)arg1;
- (void)show;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)toolbarTopOverlapView;
- (id)topbarBottomStrokeView;
- (void)updateFooterLabel;
- (void)updateLocalizedStrings;
- (void)updateTableViewData;
- (void)updateViewLayout;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end