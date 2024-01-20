#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortRespawnDataTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UFortRespawnDataTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RespawnData;
    
public:
    UFortRespawnDataTable();
};

