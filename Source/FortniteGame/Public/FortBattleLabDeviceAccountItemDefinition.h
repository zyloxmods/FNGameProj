#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortBattleLabDeviceAccountItemDefinition.generated.h"

class UFortBattleLabDeviceItemDefinition;

UCLASS(Blueprintable)
class UFortBattleLabDeviceAccountItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortBattleLabDeviceItemDefinition* BattleLabDeviceItemDefinition;
    
public:
    UFortBattleLabDeviceAccountItemDefinition(const FObjectInitializer& ObjectInitializer);
};

