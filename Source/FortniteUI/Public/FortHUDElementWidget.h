#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Components/SlateWrapperTypes.h"
#include "FortHUDElementWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHUDElementWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ElementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDElementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility HiddenVisibility;
    
public:
    UFortHUDElementWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisibilitySetEvent(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnHUDResetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnHUDElementVisibilityChanged(const FGameplayTagContainer& HiddenHUDElementTags);
    
};

