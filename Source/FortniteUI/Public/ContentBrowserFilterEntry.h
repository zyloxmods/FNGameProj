#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FilterEnabledDelegateDelegate.h"
#include "FilterSelectedDelegateDelegate.h"
#include "ContentBrowserFilterEntry.generated.h"

class UCommonTextBlock;
class UContentBrowserTag;

UCLASS(Blueprintable, EditInlineNew)
class UContentBrowserFilterEntry : public UCommonButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterEnabledDelegate OnFilterEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterSelectedDelegate OnFilterSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_FilterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UContentBrowserTag* Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
public:
    UContentBrowserFilterEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCheckMarkState(bool bIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void UpdateButtonText();
    
    UFUNCTION(BlueprintCallable)
    void SetIsFilterActive(bool bInFilterActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFilterActive() const;
    
};

