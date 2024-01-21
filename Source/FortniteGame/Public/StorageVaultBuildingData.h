#pragma once
#include "CoreMinimal.h"
#include "OutpostBuildingData.h"
#include "StorageVaultBuildingData.generated.h"

USTRUCT(BlueprintType)
struct FStorageVaultBuildingData : public FOutpostBuildingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ItemCapacityPerLevel;
    
    FORTNITEGAME_API FStorageVaultBuildingData();
};

