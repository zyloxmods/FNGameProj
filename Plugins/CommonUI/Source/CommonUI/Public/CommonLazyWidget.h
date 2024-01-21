#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnLoadGuardStateChangedDynamicDelegate.h"
#include "CommonLazyWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class COMMONUI_API UCommonLazyWidget : public UWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush LoadingBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* Content;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadGuardStateChangedDynamic BP_OnLoadingStateChanged;
    
public:
    UCommonLazyWidget();
    UFUNCTION(BlueprintCallable)
    void SetLazyContent(const TSoftClassPtr<UUserWidget> SoftWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
};

