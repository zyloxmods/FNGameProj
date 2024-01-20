#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EFortItemType.h"
#include "FortCustomSpawnCollectionManager.generated.h"

UCLASS(Blueprintable, Config=Creative)
class FORTNITEGAME_API UFortCustomSpawnCollectionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> PrimaryAssetIds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortItemType, int32> SpawnAmountMap;
    
    UFortCustomSpawnCollectionManager();
};

