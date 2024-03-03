#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AthenaMapPreloadData.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaMapPreloadData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PackageNames;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int16> MemoryLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MemoryIncrementMB;
    
    UAthenaMapPreloadData();
};

