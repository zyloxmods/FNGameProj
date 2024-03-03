#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "OnCollectionBookPageClickedDelegate.h"
#include "OnCollectionBookPageSelectedDelegate.h"
#include "FortCollectionBookOverviewWidget.generated.h"

class UCommonTreeView;
class UFortCollectionBookCategory;
class UFortCollectionBookManager;
class UFortCollectionBookPage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookOverviewWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCollectionBookPageSelected OnCollectionBookPageSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCollectionBookPageClicked OnCollectionBookPageClicked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookPage* LastSelectedPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookCategory* LastSelectedCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCollectionBookCategory*> CategoryObjectPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTreeView* PageTreeViewWidget;
    
public:
    UFortCollectionBookOverviewWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivated();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePagesChanged(UFortCollectionBookManager* CBManager);
    
};

