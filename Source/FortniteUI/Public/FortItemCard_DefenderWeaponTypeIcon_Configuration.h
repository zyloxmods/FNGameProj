#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortItemCard_DefenderWeaponTypeIcon_Configuration.generated.h"

USTRUCT(BlueprintType)
struct FFortItemCard_DefenderWeaponTypeIcon_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IconConstraints;
    
    FORTNITEUI_API FFortItemCard_DefenderWeaponTypeIcon_Configuration();
};

