#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAttributeInfo.h"
#include "FortAttributeLookupTable.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAttributeLookupTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FFortAttributeInfo> AttributeInfoList;
    
public:
    UFortAttributeLookupTable();
};

