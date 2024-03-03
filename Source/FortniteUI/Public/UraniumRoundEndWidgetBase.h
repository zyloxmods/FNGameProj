#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UraniumWidgetBase.h"
#include "UraniumRoundEndWidgetBase.generated.h"

class UOverlay;
class UPerkIntroScreenWidget;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UUraniumRoundEndWidgetBase : public UUraniumWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> RoundInfoWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* RoundInfoOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerkIntroScreenWidget* PerkIntroScreenWidget;
    
public:
    UUraniumRoundEndWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnPerkIntroFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleUpdateRoundEndVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void HandleShowRoundIntro();
    
    UFUNCTION(BlueprintCallable)
    void AttempShowRoundInfo();
    
};

