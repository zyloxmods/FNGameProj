#pragma once
#include "CoreMinimal.h"
#include "FortWorldItemDefinition.h"
#include "FortBattleLabDeviceItemDefinition.generated.h"

class ABattleLabDeviceGameplayActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortBattleLabDeviceItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABattleLabDeviceGameplayActor> BattleLabDeviceActorClass;
    
public:
    UFortBattleLabDeviceItemDefinition(const FObjectInitializer& ObjectInitializer);
};

