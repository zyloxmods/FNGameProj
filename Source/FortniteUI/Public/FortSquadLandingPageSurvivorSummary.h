#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortAttributeModifierAccumulation.h"
#include "FortSquadLandingPageSurvivorSummary.generated.h"

class UFortSquadStatValueWithIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadStatValueWithIcon* FortitudeStatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadStatValueWithIcon* OffenseStatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadStatValueWithIcon* ResistanceStatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadStatValueWithIcon* TechStatValue;
    
    UFortSquadLandingPageSurvivorSummary();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleClearSetBonusSummaryLineItemsBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleAddSetBonusSummaryLineItemBP(FFortAttributeModifierAccumulation AttributeModifierAccumulation);
    
};

