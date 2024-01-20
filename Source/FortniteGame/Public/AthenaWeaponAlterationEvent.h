#pragma once
#include "CoreMinimal.h"
#include "AthenaWeaponAlterationRule.h"
#include "FortEventItemDefinitionBase.h"
#include "AthenaWeaponAlterationEvent.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAthenaWeaponAlterationEvent : public UFortEventItemDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaWeaponAlterationRule> AlterationRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopAfterFirstMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPlayerCosmeticWeaponSkins;
    
    UAthenaWeaponAlterationEvent();
};

