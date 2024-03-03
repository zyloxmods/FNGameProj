#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ContentWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "CommonTagVisibilityWidget.generated.h"

class APlayerController;
class ULocalPlayer;

UCLASS(Blueprintable)
class UCommonTagVisibilityWidget : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDElementTag;
    
public:
    UCommonTagVisibilityWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisibilitySetEvent(ESlateVisibility InVisibility);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(ULocalPlayer* OwningLocalPlayer, APlayerController* OwningPlayerController);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnHUDElementVisibilityChanged(const FGameplayTagContainer& HiddenHUDElementTags);
    
};

