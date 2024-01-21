#pragma once
#include "CoreMinimal.h"
#include "BuildingDuplicationData.generated.h"

class UBuildingTextureData;

USTRUCT(BlueprintType)
struct FBuildingDuplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingTextureData* TextureData[4];
    
    FORTNITEGAME_API FBuildingDuplicationData();
};

