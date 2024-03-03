#pragma once
#include "CoreMinimal.h"
#include "CommonPoolableWidgetInterface.h"
#include "CommonUserWidget.h"
#include "FortUIPerk.h"
#include "FortUIPerkTier.h"
#include "FortPerkTierWidget_NUI.generated.h"

class UFortPerkWidget_NUI;

UCLASS(Blueprintable, EditInlineNew)
class UFortPerkTierWidget_NUI : public UCommonUserWidget, public ICommonPoolableWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUIPerkTier FortPerkTier;
    
    UFortPerkTierWidget_NUI();
    UFUNCTION(BlueprintCallable)
    void ProcessPerks();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGeneratePerk(FFortUIPerk Perk, UFortPerkWidget_NUI* PerkWidget);
    
    
    // Fix for true pure virtual functions not being implemented
};

