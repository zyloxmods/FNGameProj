#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortTagUIData.h"
#include "FortTagUIDataLookupTable.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTagUIDataLookupTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTagUIData> TagUIDataList;
    
public:
    UFortTagUIDataLookupTable();
};

