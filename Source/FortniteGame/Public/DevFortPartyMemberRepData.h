#pragma once
#include "CoreMinimal.h"
#include "FortPartyMemberRepData.h"
#include "DevFortPartyMemberRepData.generated.h"

USTRUCT(BlueprintType)
struct FDevFortPartyMemberRepData : public FFortPartyMemberRepData {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FDevFortPartyMemberRepData();
};

