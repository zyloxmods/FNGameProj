#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "FortBotBuildingContainerBlacklistDataTableRow.generated.h"

class ABuildingContainer;

USTRUCT(BlueprintType)
struct FFortBotBuildingContainerBlacklistDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingContainer> BlacklistedActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlacklisted;
    
    FORTNITEGAME_API FFortBotBuildingContainerBlacklistDataTableRow();
};

