#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "CommonActivatablePanel.h"
#include "Engine/DataTable.h"
#include "ECollectionBookPrimaryNavTarget.h"
#include "OnBookPageClickedDelegate.h"
#include "OnBookPageSelectedDelegate.h"
#include "OnBookSectionClickedDelegate.h"
#include "FortCollectionBookPrimaryPanel.generated.h"

class UCommonTileView;
class UFortCollectionBookOverviewWidget;
class UFortCollectionBookPage;
class UFortCollectionBookSection;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookPrimaryPanel : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBookPageSelected OnCollectionBookPageSelectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBookPageClicked OnCollectionBookPageClickedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBookSectionClicked OnCollectionBookSectionClickedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SummonInfoPanelActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookOverviewWidget* OverviewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* SectionTileViewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECollectionBookPrimaryNavTarget CurrentNavTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookSection* LastClickedSection;
    
public:
    UFortCollectionBookPrimaryPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSummonInfoPanelExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnInputMethodChanged(ECommonInputType CurrentInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectionBookSectionClicked(const UFortCollectionBookSection* ClickedSection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectionBookPageSelected(const UFortCollectionBookPage* SelectedPage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectionBookPageClicked(const UFortCollectionBookPage* ClickedPage);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBackActionExecuted(bool& bPassThrough);
    
};

