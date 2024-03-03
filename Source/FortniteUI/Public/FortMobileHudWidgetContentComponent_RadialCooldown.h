#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMobileHudWidgetContentComponent.h"
#include "FortMobileHudWidgetContentComponent_RadialCooldown.generated.h"

class URadialBacchusButtonBase;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileHudWidgetContentComponent_RadialCooldown : public UFortMobileHudWidgetContentComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> RadialCooldownSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTagToListen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URadialBacchusButtonBase* CurrentRadialCooldownWidget;
    
public:
    UFortMobileHudWidgetContentComponent_RadialCooldown();
};

