#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetContent() const;
    
};

