#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FilterChangedDelegateDelegate.h"
#include "FocusChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "ContentBrowserFiltersPanel.generated.h"

class UContentBrowserFilterEntry;
class UObject;
class UScrollBox;
class USearchPanel;
class UUserWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UContentBrowserFiltersPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterChangedDelegate OnFilterChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusChangedDelegate OnFocusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FilterEntryWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* Box_Filters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_FilterScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContentBrowserFilterEntry* Button_All;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USearchPanel* SearchPanel;
    
public:
    UContentBrowserFiltersPanel();
private:
    UFUNCTION(BlueprintCallable)
    void HandleShowAll(bool bShowAllItems, UObject* ListItemObject);
    
    UFUNCTION(BlueprintCallable)
    void HandleSearchTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void HandleFilterSelected(bool bIsFilterEnabled, UContentBrowserFilterEntry* Entry);
    
    UFUNCTION(BlueprintCallable)
    void HandleFilterEnabled(bool bIsFilterEnabled, UObject* ListItemObject);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFilterCount() const;
    
};

